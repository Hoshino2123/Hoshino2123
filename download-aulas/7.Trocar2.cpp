#include <iostream>
using namespace std;
/*********************************************************
	Fazer um programa que recebe 2 valores do utilizador
	e os troca
**********************************************************/
int main(int argc, char** argv) {
	int n1, n2;
	
	// ler os 2 valores
	cout << "Escreva o valor 1 = ";
	cin >> n1;
	cout << "Escreva o valor 2 = ";
	cin >> n2;
	
	// trocar os 2 valores
	int aux; // é necessária uma variável auxiliar

	aux = n1;
	n1 = n2;
	n2 = aux;

	// escrever novamente as variáveis
	cout << "\nAgora temos\n"
		 << "Valor 1 = " << n1
		 << "valor 2 = " << n2;

	return 0;
}