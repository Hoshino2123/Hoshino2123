#include <iostream>
using namespace std;

/****************************************************************************
* Utilização de funções
*	- passagem de parâmetros por valor (só de entrada)
*	- passagem de parâmetros por referência de endereço (entrada e/ou saída)
*	- passagem usando pointers (entrada e/ou saída)
*****************************************************************************/

// o "num1" e o "num2" são passados por valor
// nunca podem ser parâmetros de saída. São só de ENTRADA.
// O "res" é passado por referência
// desta forma, já pode ser de SAÍDA
void soma(int num1, int num2, int &res){
	res = num1 + num2;
}


int main(int argc, char** argv) {
	int val1, val2, total;
	
	cout << "valor 1 = ";
	cin >> val1;
	cout << "valor 2 = ";
	cin >> val2;
	
	//chamada da função
	soma(val1, val2, total);
	
	cout << "Resultado = " << total << endl;
		
	return 0;
}
