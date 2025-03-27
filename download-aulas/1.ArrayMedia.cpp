#include <iostream>
#include <iomanip>
using namespace std;
/***********************************************
	Criar um array para as DIM notas de um aluno
	1- pedir os valores e preencher o array
	2- listar o conteúdo do array
	3- calcular a média da notas
************************************************/
int main() {
	const int DIM = 4; // por exemplo, usar 4 notas
	int nota[DIM]; // criar o array com DIM (neste exemplo, 4) posições
	float media=0;
	
	cout << "Escreva as " << DIM << " notas do aluno\n";
	
	for(auto &el : nota){ // ler as notas
		cin >> el;
	}
	
	cout << "As " << DIM << " notas do aluno foram:\n";
	for(auto el : nota){ // Escrever as notas
		cout << setw(4) << el;
	}

	for(auto el : nota){
		media +=el;
	}
	media /=DIM;
	cout << "\nA média das notas foi: " << media;
	
	return 0;
}