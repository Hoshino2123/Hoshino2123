// declaração dos includes
#include <iostream>
using namespace std;

// declaração das variáveis globais


// função main
int main(int argc, char** argv) {
	// declaração das variáveis locais da função
	int idade; // criar a variável idade para guardar valores inteiros
	char letra = 'a';
	float altura = 1.82;
	// 1.083,14 -> forma incorreta
	// 1083.14  -> forma correta
	bool achei = false;
	// o C distingue maiúsculas de minúsculas (case sensitive)
	// "false" é diferente de "False"
	
	// escrever no ecrã
	cout << "Isto é uma frase\n";
	cout << "Isto é outra frase" << endl;
	cout << "A altura foi " << altura << endl;
	cout << "Escreva a idade = ";
	
	// ler do teclado
	cin >> idade;
	
	cout << "A idade escrita foi = " << idade;
	
	return 0;
}
