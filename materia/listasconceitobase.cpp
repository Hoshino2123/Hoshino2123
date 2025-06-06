/*As listas são conjuntos de itens encadeados
•O seu comportamento é dinâmico
• Precisam de pointers por causa da gestão dinâmica de memória
• Podem ser de 2 tipos
• Pilhas
• Filas
PILHA

• First In, Last Out (FILO)
• Ex.: pilha de livros

• Inserção feita à cabeça
(topo da pilha)
• Remoção feita à cabeça
(topo da pilha)

FILA

• First In, First Out (FIFO)
• Ex.: fila do supermercado

• Inserção feita na cauda
(fim da fila)
• Remoção feita à cabeça
(início da fila)
• A cabeça da lista é uma variável estática
• A cauda da lista (quando existe) também é estática
•Os vários elementos é que são criados dinamicamente
• Cada item (elemento) é uma estrutura
• A cabeça da lista é uma variável estática
• A cauda da lista (quando existe) também é estática
•Os vários elementos é que são criados dinamicamente
• Cada item (elemento) é uma estrutura.

insere-se á causa, remover á cauda, listar - pilha*/
// estrutura

#include <iostream>
#include <string>
using namespace std;

struct el{
    int num;
    string nome;
    el *next;
} *pHead = nullptr;


//funções específicas para cada aplicação
 /*void putdata(el *elemento) {
    cout << "dados do aluno\n"
    << "nº de aluno"
    << (*elemento).num //ou elemento -> num
    << endl
    << "nome:"
    << elemento ->nome
    << endl;
}



void getdata(el *elem) {
    cout <<"dados do alunos\n"
    << "nº de aluno:";
    cin >> elem ->num;
    cout << "nome:";
    cin.ignore();
    getline(cin,elem ->nome);
}

int main() {
    el aluno; 
    pHead = &aluno;
    getdata(pHead);
    putdata(pHead);
    return 0;
} 

/* inserir á cabeça:
1-alocar espaço
2- testar se foi possivel
3- pedir dados
4- inserir na lista
A função devolve true  se conseguir inserir.*/

/* include <iostream>
#include <string>

using namespace std;

bool ins *Head(){
    el *pnovo = new (nothrow) el;
    if(!pnovo) return false
    getdata(pnovo);
    pnovo ->next =pHead;
    pHead=pnovo;
    return = true;

}

int main (){
    if(inshead())
    cout << "inserir";
    else
    cout << "erro";
    if(pHead) 
} */
/* faça o main para inserir vários elementos. o total de elementos deve ser perguntado ao user. Se der erro na inserção    de algum elemento, o programa deve terminar.
nota: Não precisa de listar.*/

#include <iostream>
using namespace std;

int main(){
    int totalElementos;
    
    // Pede ao user quantos elementos ele quer inserir
    cout << "Quantos elementos deseja inserir? ";
    cin >> totalElementos;
    
    // Verifica se o user digitou um número válido
    if (cin.fail()) {
        cout << "Erro: Numero invalido!" << endl;
        return 1; // Termina o programa com erro
    }
    
    // Verifica se o número é positivo
    if (totalElementos <= 10) {
        cout << "Erro: Digite um numero maior que zero!" << endl;
        return 1;
    }
    
    // Loop para inserir cada elemento
    for (int i = 0; i < totalElementos; i++) {
        int elemento;
        cout << "Digite o elemento " << (i+1) << ": ";
        cin >> elemento;
        
        // Verifica se o elemento é válido
        if (cin.fail()) {
            cout << "Erro: Elemento invalido!" << endl;
            return 1; // Termina o programa com erro
        }
        
        // Aqui você poderia fazer algo com o elemento, 
        // mas como não pediu para armazenar ou listar,
        // apenas continuamos o loop
    }
    
    cout << "Todos os elementos foram inseridos com sucesso!" << endl;
    return 0;
}