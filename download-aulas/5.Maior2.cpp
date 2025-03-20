#include <iostream>
using namespace std;

/**************************************************************
	Condição: instrução if()
	Pode ter algumas variantes
		if()
		if() else
		if() else if()
		if() else if() else

	Exemplo:
		1- pedir um número
		2- se for 3, dizer que é 3
		3- se for 4, dizer que é 4
		4- caso contrário, dizer que não é 3 nem é 4
***************************************************************/	
int main(int argc, char** argv) {
	int x;

	cout << "Valor para o x = ";
	cin >> x;
	
	if(x==3){ // x é igual a 3?
		cout << "x é 3" << endl; // vem por aqui se a resposta for "sim"
	} else if(x==4){
		cout << "x é 4" << endl; // "não" no 1º teste e "sim" no 2º
	} else{
		cout << "x não é 3 nem 4" << endl; // quando os 2 testes dão "não"
	}
	
	// outra apresentação possível
	if(x==3){ // x é igual a 3?
		cout << "x é 3" << endl; // vem por aqui se a resposta for "sim"
	} else
		if(x==4){
			cout << "x é 4" << endl; // aqui é quando a resposta é "não"
		} else{
			cout << "x não é 3 nem 4" << endl; // quando os 2 testes dão "não"
		}

	return 0;
}
