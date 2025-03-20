#include <iostream>
using namespace std;

/****************************************************************************
* Utilização de funções
*	- passagem de parâmetros por valor (só de entrada)
*	- passagem de parâmetros por referência de endereço (entrada e/ou saída)
*	- passagem usando pointers (entrada e/ou saída)
*****************************************************************************/

// passagem por valor
// os parâmetros são só de ENTRADA
// o resultado tem de ser devolvido no NOME da própria função
int soma(int n1, int n2){
	return n1+n2;
}

int main(int argc, char** argv) {
	int val1, val2, total;
	
	// ler 2 valores
	cout << "Valor 1 = "; cin >> val1;
	cout << "Valor 2 = "; cin >> val2;
	
	// quero uma função que some os 2 valores
	// total = val1 + val2;
	total = soma(val1, val2); //chamar a função soma()
	
	// escrever o resultado da soma
	cout << "Soma = " << total;
	cout << endl;
	
	// IMPORTANTE: se os parâmetros forem passados por valor,
	// ao chamar a função podemos usar constantes
	
	// Exemplo: escrever o resultado da soma de 5 com 8
	cout << "\n5 + 8 = " << soma(5,8);
	
	return 0;
}


