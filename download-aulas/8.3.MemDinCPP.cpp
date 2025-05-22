/*****************************************************************************
 * Para utilização dinâmica de memória em C++, há 2 instruções
 * new	 -> pedir memória ao PC
 * delete -> libertar a memória
 *
 * As variáveis são criadas durante a execução do programa.
 * Na altura em que se escreve o código, ainda não se sabe qual a dimensão
 * que se pretende para as variáveis (sobretudo se forem arrays).
 * Este conceitos são importantes para perceber as LISTAS, que irão ser
 * lecionadas mais à frente.
 *
 * Na 1ª parte vamos:
 * 	1- alocar espaço para guardar o número
 * 	2- testar se foi possível alocar o espaço
 * 	3- ler o valor e guardá-lo
 * 	4- somar 4 ao valor lido
 * 	5- escrever o resultado
 * 	6- libertar o espaço alocado
 *
 * Na 2ª parte vamos:
 * 	1- criar um array
 * 	2- verificar se foi possível
 * 	3- preencher o array
 * 	4- listar o array
 * 	5- libertar memória alocada
*****************************************************************************/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	// criar um apontador para um inteiro
	int *pNum = nullptr;
	
	//1. alocar memória para guardar o número
	pNum = new (nothrow) int;
	// devolve um pointer "tipado" para o espaço alocado
	// nothrow serve para que não seja lançada uma exceção
	// em caso de erro
	
	//2. testar se conseguiu alocar a memória
	if( !pNum ) return 8; // DOS error code 8 = insufficient memory
	// pNum fica com o endereço da memória alocada (se estiver tudo OK)
	// pNum fica vazio (com zero) se o sistema não conseguiu alocar memória
	
	// em "C"	ZERO (vazio) significa FALSO
	//			DIFERENTE DE ZERO significa VERDADEIRO
	
	//3. Ler o número
	cout << "Escreva o valor: ";
	cin >> *pNum;
	
	//4. Somar-lhe 4
	*pNum += 4;
	
	//5. Escrever o resultado
	cout << "Resultado depois de somar 4: " << *pNum << endl;
	
	//6. Libertar o espaço alocado
	delete pNum;
	
	cout << "------------------------------\n"
		 << "       Arrays dinâmicos\n"
		 << "-------------------------------\n";

	// Pode-se usar o new para criar arrays.
	// Basta indicar o nº de elementos (5, neste caso) do array

	int *pArr = nullptr; // Criar o pointer para o array
	int *pAux = nullptr; // Criar o pointer auxiliar

	pArr = new (nothrow) int[5]; // alocar memória para os 5 int

	if( !pArr ) return 8; // memória insuficiente

	for(int i=0; i<5; i++) // preencher o array
		pArr[i] = i+10; // exemplo de utilização
	
	pAux = pArr;
	for(int i=0; i<5; i++) // listar o array
		cout << *pAux++ << ' '; // exemplo de utilização
		
	delete[] pArr;
	// atenção aos [] a seguir ao delete
	// não há necessidade de especificar a dimensão do array
	// porque o C++ controla a dimensão do bloco que alocou

	return 0;
}