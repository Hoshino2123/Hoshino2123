#include <iostream>
using namespace std;

/**************************************************************
	Condição: instrução if()
	Pode ter algumas variantes
		if()
		if() else
		if() else if()
		if() else if() else
***************************************************************/	
int main() {
	int x;

	cout << "Valor para o x = ";
	cin >> x;
	
	if(x==5){ // x é igual a 5?
		cout << "x é 5" << endl; // vem por aqui se a resposta for "sim"
	} else {
		cout << "x não é 5" << endl; // aqui é quando a resposta é "não"
	}
		
	return 0;
}
