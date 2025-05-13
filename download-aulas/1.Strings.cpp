/************************************************************************
* Esta sequência de exemplos mostra as diferenças entre usar strings
* 	- no formato de array de caracteres
* 	ou
*	- no formato string (objeto)
*
* NOTA: Se precisar de usar o getline() após ter usado um cin, deve
*       limpar o '\n' do buffer de entrada escrevendo a instrução
*	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
*       antes do getline().
*		Para isso, no início precisa da instrução #include <limits>
*
* NOTA: Na maioria das situações, pode usar apenas 
*		cin.ignore();
************************************************************************/
#include <iostream>
#include <cstring>   // para as funções do array de caracteres
#include <windows.h> // para a função Sleep(miliseconds);
using namespace std; // para o objeto string (e para o cin e cout)

int main(int argc, char** argv) {
	/*********************************
	 array de char (termina com '\0')
	**********************************/
	cout << "******************* Array de char *************\n\n";
	char nome[20], apelidos[20], nomeCompleto[40];
	
	cout << "Escreva o seu primeiro nome: ";

	//cin.ignore(); // necessário caso tivesse usado um cin antes

	// para ler deve-se usar a função cin.getline()
	cin.getline(nome,20); // é obrigatório especificar a dimensão do array
	cout << "\nEscreveu:" << nome << endl;
	
	cout << "Comprimento do nome: " << strlen(nome) << endl;
	
	// percorrer uma string
	for(int i=0; i<strlen(nome); i++){
		cout << nome[i]; // escrever a string, caracter a caracter
		Sleep(150); // para ir escrevendo devagar
	}
	cout << endl;
	
	// outra forma de percorrer a string
	for(int i=0; nome[i]!='\0'; i++){
		cout << nome[i]; // escrever a string, caracter a caracter
		Sleep(150); // para ir escrevendo devagar
	}
	cout << endl;
	
	cout << "Escreva os seus apelidos: ";

	//cin.ignore(); // necessário caso tivesse usado um cin antes

	cin.getline(apelidos,20); // é obrigatório especificar a dimensão do array

	cout << "Comprimento da string apelidos = " << strlen(apelidos) << endl;
	cout << "Apelidos = " << apelidos << endl;
	
	// copiar strings
	// se tentarmos "apelido = strAux;" o compilador dá erro
	// não se podem fazer atribuições tal como se fazem para os tipos simples
	// em vez disso, ou se faz um "for" para percorrer a string,
	// ou se usa a função strcpy(destino, origem)
	strcpy(nomeCompleto, nome);

	// juntar (concatenar) strings
	strcat(nomeCompleto, " ");
	strcat(nomeCompleto, apelidos); // acrescentar no fim da string
	cout << "Comprimento do nome completo = " << strlen(nomeCompleto) << endl;
	cout << "Nome completo = " << nomeCompleto << endl;

	/***************************************************
	 objeto string ('\0' é um caracter como os outros)
	****************************************************/
	cout << "\n\n\n******************* objeto string *************\n\n";
	string nome2, apelido2, nomeCompleto2;
	
	cout << "Escreva outro nome: ";

	//cin.ignore(); // necessário caso tivesse usado um cin antes

	getline(cin, nome2); //função para ler strings
	
	cout << "Comprimento do nome usando .size(): " << nome2.size() << endl;
	// também se pode usar
	cout << "Comprimento do nome usando .length(): " << nome2.length() << endl;
	
	// percorrer uma string
	// Não se deve usar o teste "nome2[i]!='\0'" como se faz no array de char
	for(int i=0; i < nome2.size(); i++){
		cout << nome2[i]; // escrever a string, caracter a caracter
		Sleep(150); // para ir escrevendo devagar
	}
	cout << endl;
	
	cout << "Escreva outros apelidos: ";
	getline(cin, apelido2); //função para ler strings

	// copiar e/ou juntar strings
	// com o objeto string, podem-se fazer atribuições usando o =
	// tal como se faz para os outros tipos
	nomeCompleto2 = nome2 + ' ' + apelido2;
	cout << "Comprimento do nome completo = " << nomeCompleto2.size() << endl;
	cout << "Nome completo = " << nomeCompleto2 << endl;

	return 0;
}
