/*******************************************************************************
 * Novidade:
 * 	Listar as pessoas de uma idade escolhida pelo utilizador
 * 
 * Já feito anteriormente:
 * 	Criar Uma turma com 10 alunos
 * 	Ler os dados de cada aluno
 * 	Listar todos os alunos
 * 	Cada aluno tem:
 * 		- número
 * 		- nome
 * 		- idade
*/ 
#include <iostream>
#include <string>
using namespace std;

// Definição da estrutura. Não implica reserva de espaço
// Criar um tipo novo chamado "pes"
struct aluno {
	int num;		// campo número de aluno 
	string nome;	// campo nome
	int idade;		// campo idade
};

const int MAXalunos = 3; // para testes. Depois pode mudar para 10

int main(int argc, char** argv) {
	// para fazer um conjunto de pessoas (array de estruturas)
	aluno turma[MAXalunos];
	int idade; // idade das pessoas a listar
	bool achei = false; // saber se encontrou alguém
	
	// ler, usando um ciclo de repetição, os dados de cada aluno
	cout << "\nDados para os alunos\n"
		 << "---------------------\n";
	for( auto &el : turma ){ // não esquecer o &
		cout << "Número: "; cin >> el.num;
		cout << "  Nome: ";
		cin.ignore();
		getline(cin, el.nome);
		cout << " Idade: "; cin >> el.idade;
		cout << endl; // linha em branco entre dois alunos
	}
	
	//	Escrever, usando um ciclo de repetição, os dados de cada aluno
	cout << "\nDados lidos dos alunos\n"
		 << "----------------------\n";
	for( auto el : turma ){
		cout << "Número: " << el.num << endl
			 << "  Nome: " << el.nome << endl
			 << " Idade: " << el.idade << endl
			 << endl; // para ficar uma linha em branco entre 2 alunos
	}
	
	//	Listar as pessoas de uma determinada idade
	cout << "Idade para as pessoas a listar: "; cin >> idade;

	cout << "\nPessoas selecionadas\n"
		 << "--------------------\n";
	for( auto el : turma ){
		if( el.idade == idade ){
			achei = true; // há pelo menos uma pessoa com a idade escolhida
			cout << "Número: " << el.num << endl
				<< "  Nome: " << el.nome << endl
				<< endl; // para ficar uma linha em branco entre 2 alunos
		}
	}
	if( !achei ) cout << "Ninguém tem essa idade";
	
	return 0;
}