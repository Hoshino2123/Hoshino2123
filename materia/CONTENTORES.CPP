/* contentores
- array - "array"
- vector - "upgrade ao array"
-forward_list - "semelhante a pilha  e fila"
-list - "listas duplas"
/////////////////////////////////////////////////////////////////////////////

array <int, 4> myArr={10, 20, 30, 40};
cout  << myArr[2]; //30
cout  << myArr[8]; // escreve qualquer coisa mas n dá erro

cout << myArr.at(2), //30
cout  << myArr.at (8); dá erro!!
iteradores
". espécie" de pointer
. tem que se indicar o tipo do contentor para onde "apontar"
. tipicamente chamo-lhe it

contentor array
. dimensão fixa
. elementos iniciados com zero
. ao passar a uma função  não é preciso indicar a dimensão, porque ela ja está na definição do título.
. pode-se usar o for(:) dentro da função que recebe o <array> como parâmetro.
exemplo : array <int, 4> meuArray;
meuArray.fill(7);
é passado por valor, exceto se preenchido por um &.
/******************************** */
/*
vetor
. dimensão variável
elementos iniciados com zero 
não é preciso passar a dimensão á função.
também se pode usar o (for:)
exemplo: vector <int> meuV;
vector<int> V2=nome do vetor, (5,7), 5=é criado  com 5 elementos, 7=tudo preenchido  com 7
igual ao contentor array.
*/

#include <iostream>
#include  <vector>

using namespace std;

/* int main()
{
    vector<int> v3(5,7);
    for(auto el:v3) {
    cout << el << endl;
    }
    return 0;
}

/* com base no contentor vector faça um programa que tem o seguinte menu.
inserir um nome no final
listar todos os nomes
apagar o último nome
terminar*/


#include <iostream>
#include <vector>
#include <string> // Para usar strings
using namespace std; /* Explicação Passo a Passo do Programa em C++
Vamos analisar detalhadamente cada parte do programa que gerencia nomes em um vetor:

1. Estrutura Básica e Bibliotecas */

// Protótipos das funções
char mostramenu();
void inserirNome(vector<string>& pessoas);
void listarNomes(const vector<string>& pessoas);
void apagarUltimoNome(vector<string>& pessoas); // 2. Declaração das Funções (Protótipos)

int main() { // 3. Função Principal (main)
    char op;
    vector<string> pessoas; // Vetor vazio para armazenar os nomes

    do {
        op = mostramenu();
        switch(op) {
            case 'i':
                inserirNome(pessoas);
                break;       
            case 'l':
                listarNomes(pessoas);
                break;
            case 'a':
                apagarUltimoNome(pessoas);
                break;
            case 't':
                cout << "A terminar o programa..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while(op != 't');
    
    return 0;
}

// Função para mostrar o menu e obter a opção do usuário
char mostramenu() { //4. Função mostramenu()
    char op;
    cout << "\nMenu:\n";
    cout << "i - Inserir um nome no final\n";
    cout << "l - Listar todos os nomes\n";
    cout << "a - Apagar o último nome\n";
    cout << "t - Terminar\n";
    cout << "Escolha uma opção: ";
    cin >> op;
    cin.ignore(); // Limpar o buffer do teclado
    return tolower(op); // Retorna a opção em minúsculo
}

// Função para inserir um nome no final do vetor
void inserirNome(vector<string>& pessoas) { // 5. Função inserirNome()
    string nome;
    cout << "Digite o nome a ser inserido: ";
    getline(cin, nome); // Permite nomes com espaços
    pessoas.push_back(nome);
    cout << "Nome inserido com sucesso!" << endl;
}

// Função para listar todos os nomes
void listarNomes(const vector<string>& pessoas) { // 6. Função listarNomes()
    if (pessoas.empty()) {
        cout << "A lista está vazia!" << endl;
    } else {
        cout << "\nLista de nomes:\n";
        for (const string& nome : pessoas) {
            cout << nome << endl;
        }
    }
}

// Função para apagar o último nome
void apagarUltimoNome(vector<string>& pessoas) { // 7. Função apagarUltimoNome()
    if (pessoas.empty()) {
        cout << "A lista já está vazia, não há o que apagar!" << endl;
    } else {
        cout << "Apagando o último nome: " << pessoas.back() << endl;
        pessoas.pop_back(); /* Verifica se o vetor está vazio antes de tentar apagar

back(): Acessa o último elemento

pop_back(): Remove o último elemento do vetor

Fluxo do Programa
Inicia criando um vetor vazio

Entra no loop do menu

Para cada opção:

'i': Chama a função para inserir nome

'l': Chama a função para listar nomes

'a': Chama a função para apagar o último nome

't': Sai do programa

Repete até que o usuário escolha 't'
*/
    }
}



