
/*****************************************************************
 * Algoritmo de ordenação Bubble Sort melhorado
 * Quando se faz uma passagem em que não há trocas, assinala-se com
 * uma flag e o loop termina.
 * 
 * É desnecessária a linha
 *  	cout << ".";
 * Só foi inserida para poder verificar que o total de testes
 * feitos varia de acordo com a ordenação do array inicial.
 *
 * Para fazer várias experiências,
 * retire o comentário de apenas um dos testes
 */

#include <iostream>
using namespace std;

void BubbleSortFlag(int *a, int nElem){

	for( size_t i=0, troca=true; i<nElem-1 and troca; i++ ){
		troca=false;
		for(size_t j=0; j<nElem-i-1; j++ ){
			cout << "."; // desnecessário. Só para contar o número de testes feitos
			if( a[j] > a[j+1] ){// estão desordenados
				// trocar
				swap( a[j], a[j+1]);
				troca = true;
			}
		}
	}
}

/* Para testar o código, retire o comentário de apenas um dos testes */
int main(int argc, char** argv) {
//	int arr[] = {3,5,1,2,4}; // array para ordenar: teste 1
	int arr[] = {5,4,3,2,1}; // array para ordenar: teste 2
//	int arr[] = {1,2,3,4,5}; // array para ordenar: teste 3
//	int arr[] = {1,2,4,3,5}; // array para ordenar: teste 4
//	int arr[] = {3,2,1,4,5}; // array para ordenar: teste 5
	
	// calcular o nº de elementos do array
	const size_t DIM = sizeof(arr)/sizeof(arr[0]);
	
	// ordenar
	BubbleSortFlag(arr, DIM);
	
	// escrever array
	for(auto num : arr ){
		cout << num << ' ';
	}
	
	return 0;
}
