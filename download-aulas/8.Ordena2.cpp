#include <iostream>
using namespace std;

/*********************************
	ler 2 valores
	Ordenar por ordem crescente
	Listar
**********************************/
int main(int argc, char** argv) {
	int n1, n2, aux;
	
	// ler 2 valores
	cout << "Valor 1 = "; cin >> n1;
	cout << "Valor 2 = "; cin >> n2;
	
	// Ordenar por ordem crescente
	if(n1>n2){
		// trocar
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	
	// escrever por ordem crescente
	cout << n1 << " é menor ou igual a " << n2;
	
	return 0;
}