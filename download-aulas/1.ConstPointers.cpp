#include <iostream>
using namespace std;

/****************************************************************************
* Utilização de pointers constantes, em funções
*	- passagem usando pointers (entrada e/ou saída)
*	- passagem usando pointers constantes (entrada)
*
* NOTA: Se usarmos um pointer constante, dentro da função
*		não se pode alterar o apontado pelo pointer
*
* NOTA: Atenção que o valor do pointer PODE ser alterado
*
* NOTA: Este conceito é útil para poder passar arrays de forma a não poderem
*		ser alterados dentro das funções (PARECIDO com uma passagem por valor)
*****************************************************************************/

// *p1 pode ser alterado
// *p2 NÃO pode ser alterado (por isso se diz ser um parâmetro só de entrada)
void testes(int *p1, const int *p2){

	cout << "Dentro da função\n"
		 << "Valor de *p1: " << *p1 << endl  // 5
		 << "Valor de *p2: " << *p2 << endl; // 5

	// podemos alterar o apontado por p1
	*p1 = 6;
	cout << "*p1 passou a ser 6\n";

	// não é possível alterar o apontado por p2
	// tire o comentário da linha seguinte para ver o erro
	//*p2 = 6;

	// no entanto, podemos alterar o valor do próprio pointer
	p2 += 20;
	// neste exemplo, o pointer fica a apontar para uma memória 
	// que não sabemos o que tem dentro
}

int main(int argc, char** argv) {
	int val1 = 5, val2 = 5;
	
	cout << "Valor 1 = 5\n"
		 << "Valor 2 = 5\n";
	
	cout << "Chamada da função\n";
	testes( &val1, &val2 );
	
	cout << "Após terminada a função\n"
		 << "Valor 1 = " << val1 << endl // 6
		 << "Valor 2 = " << val2 << endl // 5
		 << "O valor 2 não foi alterado pois era só de entrada (pointer constante)";
	
	return 0;
}