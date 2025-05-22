#include <iostream>
using namespace std;

/****************************************************************************
* Utilização de funções
*	- passagem de parâmetros por valor (só de entrada)
*	- passagem de parâmetros por referência de endereço (entrada e/ou saída)
*	- passagem usando pointers (entrada e/ou saída)
*****************************************************************************/

// usando pointers... também podemos ter parâmetros de saída
void soma(int num1, int num2, int *res){
	*res = num1 + num2; // o apontado por "res" recebe o resultado
}

int main(int argc, char** argv) {
	int val1, val2, total;
	
	cout << "Valor 1 = ";
	cin >> val1;
	cout << "Valor 2 = ";
	cin >> val2;
	
	// chamada da função
	// passa-se o endereço do local onde queremos guardar o resultado
	soma(val1, val2, &total);
	
	cout << "Resultado da soma = " << total << endl;
	
	return 0;
}