/* ESTRUTURAS:
Conjunto de items de tipos diferentes
A definição de uma estrutura é a criação de um tipo de dados novo
*/
// começa sempre com struct //
// pôe-se sempre um ; á frente do { pra fechar. //
/*struct PES - // nome da estrutura - nome so novo  tipo //
{
    int idade; // campos da estrutura 
    string nome; // campos da estrutura 

};
// se quiser criar uma variável pessoa , do tipo PES
PES pessoa
pessoa.idade = 20; //se quiser-mos usar uma variável com o campo da estrutura , escrever 20 na idade da pessoa.

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// criar um conjunto de 3 pessoas.
PES turma[3]; //array de estruturas

/* como meter 5 em um array que é int num[3]?*/
/*int num{3};
num[0] = 5;

//array multidimensional.
PES arr[5][8];

/* exercício. 
1) criar uma turma com 10 alunos, cada aluno deve ter:: nº do aluno, nome e curso
2) escrever o código necessário para pedir os dados do utilizador
3) listar os dados de todos oos alunos
nota: recomendo que criem uma maxAL para definir o nº de alunos, com isto, podem testar só com 2 ou 3 em vez doo 10*/
//(1):
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//criar a estrutura.
struct Aluno
{
    int numero;
    string nome;
    string curso;
};
//dados do alunos
int main() {
    vector<Aluno> turma= {
    {1, " José Correia Almeida ", " biologia marítima "},
    {2, " João Pedro Matos ", " medicina veterinária "},
    {3, " Shen P'eng ", " Turismo"},
    {4, " Douglas Pereira Araujo ", " Engenharia Mecânica" },
    {5, " Joso Delić ", " Ciências Ambientais. " },
    {6, " Sabine Eberhardt", " Marketing "},
    {7, " Nuguse Semhar ", "  Artes Visuais "},
    {8, " Aykut 't Lam ", " Ciências do Comportamento "},
    {9, " Abukhan Barsukov ", " Jornalismo "},
    {10, "Anders C. Klausen ", "Ciências Sociais "}
    };
    cout << " Turma de 10 alunos :" << endl;
    cout << "------------------:" << endl;
    for(const auto& aluno : turma){ //ver os 10 alunos no ecrã
       cout << " Nº aluno: " << " = " << aluno.numero  << " nome_de_aluno: " <<  " = " << aluno.nome  << " Curso do aluno:  " << " = " << aluno.curso << endl;
    }
    return 0;
};
// pelo user
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estrutura para representar um aluno
struct Aluno {
    int numero;
    string nome;
    string curso;
};

int main() {
    vector<Aluno> turma;  // Vetor para armazenar os alunos
    int totalAlunos = 10;  // Total de alunos a cadastrar

    cout << "--- inscrição de alunos ---\n";
    cout << "Insira os dados de " << totalAlunos << " alunos:\n\n";

    for (int i = 0; i < totalAlunos; ++i) {
        Aluno aluno;
        
        cout << "Aluno " << (i + 1) << ": " << endl;
        
        // Número do aluno
        cout << "Nº do aluno: ";
        cin >> aluno.numero;
        cin.ignore();  // Limpa o buffer do teclado
        
        // Nome do aluno
        cout << "Nome: ";
        getline(cin, aluno.nome);  // Permite nomes com espaços
        
        // Curso
        cout << "Curso: ";
        getline(cin, aluno.curso);
        
        turma.push_back(aluno);  // Adiciona o aluno ao vetor
        cout << "\n";  // Espaço entre alunos
    }

    // Exibe a turma
    cout << "--- Turma inserida ---" << endl;
    for (const auto& aluno : turma) {
        cout << "Nº: " << aluno.numero << " | Nome: " << aluno.nome 
             << " | Curso: " << aluno.curso << endl;
    }

    return 0;
}
