#include <iostream>
#include <array>  // para os contentores do tipo array
#include <vector> // para os contentores do tipo vector
using namespace std;

int main(int argc, char** argv) {
	// Criação tradicional de arrays
	// Têm restrições ao serem passados às funções como
	// argumentos (não se pode usar o ":"), porque são
	// passados como um pointer para a 1ª posição
	// Se criados com alocação dinâmica de memória,
	// tem de se fazer manualmente a sua gestão
	// usando "free()" ou "delete"
	// Os arrays tradicionais não são iniciados com zero
	int idade[] = {20, 30, 40};
	string nome[] = {"Jorge", "Ana", "Batata"};
	
	cout << "Array tradicional\n";
	// listar o array, tirando partido da keyword "auto" e do ":"
	// desta forma, não é necessário saber o tipo do array
	cout << "Auto com inteiros\n";
    for(auto el : idade){
        cout << el << endl;
    }

	// verifique que o for é igual ao anterior
	cout << "Auto com strings\n";
    for(auto el : nome){
        cout << el << endl;
    }

	// Determinar a dimensão de um array tradicional
	size_t myDim; // tipo específico para tamanhos e contagens
	// é um inteiro sem sinal, cuja capacidade é suficiente
	// para conter o tamanho de qualquer objeto ou array na memória
	// do computador
	myDim = sizeof(idade) / sizeof(idade[0]);
	// myDim fica com a dimensão (nº de elementos) do array "idade"
	cout << "\nsizeof()=" << myDim << "\n";

	//-------------------------------------------------------------
	// Contentores relacionados com arrays (ex. <array> e <vector>)
	//-------------------------------------------------------------
	// Não é necessário fazer a gestão de memória
	// usando o "free()" ou o "delete"
	// Se passados como argumento, na função pode-se
	// usar o "auto" e o ":"
	// São automaticamente iniciados com zero

	//Contentor "array"
	array<int, 5> myArray = {4,5,6};
	// O array é de tamanho FIXO
	// Pode ser iniciado com menos elementos (os restantes ficam com zero)
	// A variável "myArray" pode ser passada a uma função, como argumento
	// Se declarar um template, não é necessário
	// especificar a dimensão do array no cabeçalho da função
	cout << "\nContentor array\n";
    for(auto el : myArray){
        cout << el << endl;
    }
	// Note que o for é igual ao do array tradicional

	// exemplo para iniciar todos os elementos com 8
	myArray.fill(8);
	cout << "\nContentor array (tudo com 8)\n";
    for(auto el : myArray){
        cout << el << endl;
    }
	

	// Contentor "vector"
	vector<int> myVector = {5,6,7};
	// O array é de tamanho VARIÁVEL (dinâmico)
	// A variável "myVector" pode ser passada a uma
	// função, como argumento
	// Não é necessário especificar a dimensão do vector
	// no cabeçalho da função (logicamente, porque é dinâmico)
	cout << "\nContentor vector\n";
    for(auto el : myVector){
        cout << el << endl;
    }
	// Note que o for continua igual aos anteriores

	// exemplo para criar um vector com 4 elementos
	// opcionalmente, podem-se iniciar todos com 7
	vector<int> my2ndVector(4,7);
	cout << "\nContentor vector (4 elementos, todos com 7)\n";
    for(auto el : my2ndVector){
        cout << el << endl;
    }
	return 0;
}