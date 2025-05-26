/*********************************************
 * Algoritmo de ordenação Bubble Sort.
 * Ordena um array de qualquer dimensão
 * 
 */
#include <iostream>
using namespace std;

void BubbleSort(int *a, int nElem){
	
	for(size_t i=0; i<nElem-1; i++){
		for(size_t j=0; j<nElem-i-1; j++){
			if(a[j]>a[j+1]){// estão desordenados
				swap( a[j], a[j+1] ); // trocar
			}
		}
	}
}

/* Para testar o código, retire o comentário de apenas um dos testes */
int main(int argc, char** argv) {
	int arr[] = {3,5,1,2,4}; // array para ordenar: teste 1
//	int arr[] = {5,4,3,2,1}; // array para ordenar: teste 2
//	int arr[] = {1,2,3,4,5}; // array para ordenar: teste 3
//	int arr[] = {1,2,4,3,5}; // array para ordenar: teste 4
//	int arr[] = {3,2,1,4,5}; // array para ordenar: teste 5

	// calcular o nº de elementos do array
	const size_t DIM = sizeof(arr)/sizeof(arr[0]);
	
	// ordenar
	BubbleSort(arr, DIM);
	
	// escrever
	for(auto num : arr){
		cout << num << ' ';
	}
	
	return 0;
}
