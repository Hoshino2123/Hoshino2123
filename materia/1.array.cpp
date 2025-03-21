#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************
 Utilização de arrays
  - Um array é um conjunto de espaços todos do mesmo tipo
  - O array só tem UM nome que indica TODOS os espaços
  Exemplo:
   - em vez de criar 10 variáveis, cria-se apenas uma
     com espaço para conter os 10 elementos
     
  - para aceder a um elemento do array, usamos o seu índice
  - os índices começam em ZERO
 
*/

// tipicamente, declara-se a dimensão do array como uma constante
const int dim = 6;

int main() {
	// criar um array para guardar 6 notas
	// int i1, i2, i3,..... -> não faz sentido
	int notas[dim];
	
	// Exemplo para ler um valor para o 3º elemento do array
	cout << "Escreva o valor para o 3º elemento ";
	cin >> notas[2];
	
	//Exemplo para somar 10 ao 3º elemento
	notas[2] = notas[2]+10;
	// ou então, notas[2] += 10;
	
	//Exemplo para escrever o resultado
	cout << "Após somar 10, o valor fica = ";
	cout << notas[2];

	// Exemplo para  pedir todas as notas do array ao utilizador
	cout << "\n\nEscreva as notas do aluno\n";
	
	for(int i=0; i<dim; i++){ // ler as notas
		cin >> notas[i];
	}
	// O "for" anterior podia ter sido
	// for(auto &el : notas){
	//	cin >> el;
	//}
	// Note a obrigatoriedade de usar o '&' antes de "el"
	
	cout << "As notas do aluno foram:\n";
	for(int i=0; i<dim; i++){ // Escrever as notas
		cout << setw(4) << notas[i];
	}

	// Exemplo para somar 1 a cada nota do array
	// É obrigatório usar o '&' quando se pretende modificar o conteúdo do array
	for( auto &el : notas ){
		el++;
	}

	cout << "\nEscrever o array incrementado, mas usando uma instrução diferente\n";
	// Pode-se usar uma versão "diferente" do for
	for(auto el : notas){
		cout << setw(4) << el;
	}

	return 0;
}
