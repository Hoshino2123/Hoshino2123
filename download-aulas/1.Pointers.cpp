/****************************************************
	Utilização de pointers
		- Criação de uma variável tipo pointer
		- Iniciar um pointer
		- Utilização de pointers
		- Acesso à informação apontada pelo pointer
*****************************************************/
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int idade;	 // criar uma variável para conter um inteiro
	int *pIdade; // criar uma variável do tipo "pointer" (apontador)
				 // que aponta para um inteiro
	
	idade = 78; // colocar 78 dentro da idade
    cout << "Idade = ";
	cout << idade; // escreve 78 no ecrã
	
	pIdade = &idade; // pIdade fica com o endereço da variável idade
					 // & lê-se "endereço de" (address of)
					 // diz-se que pIdade aponta para a idade
					 
	cout << "\nEndereco da idade = ";
    cout << pIdade; // escreve o endereço da variável idade
	cout << "\nOutra maneira de escrever o mesmo = ";
	cout << &idade; // outra maneira de escrever o mesmo
	
    cout << "\nEndereco de pIdade = ";
	cout << &pIdade; // escreve o endereço da variável pIdade
	
    cout << "\nValor da idade, mas usando o pointer = ";
	cout << *pIdade; // escreve o conteúdo do que está apontado pela pIdade
					 // ou seja, escreve o valor da idade, mas sem fazer
					 // uso da variável idade em si
					 // escreve 78 no ecrã
	
	return 0;
}