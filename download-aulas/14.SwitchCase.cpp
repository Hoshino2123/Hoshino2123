#include <iostream>
using namespace std; // é necessário para o cin e cout

/*********************************************
	Nalgumas situações, quando temos muitos
	IFs encadeados,	podemos usar um SWITCH
	
	Nota 1: Só é válido se a variável a testar
	        em todos os IF for a mesma
	        
	Nota 2: O valor a comparar em cada CASE
			tem de ser constante
*********************************************/
	
int main(int argc, char** argv) {
	char x;
	
	// pedir o valor ao utilizador
	cout << "Letra = ";
	cin >> x;
	
	switch(x){
		case 'A':
		case 'a':
			cout << "Bom" << endl;
			break;
			
		case 'B':
		case 'b':
			cout << "Suficiente" << endl;
			break;
			
		case 'C':
		case 'c':
			cout << "Insuficiente" << endl;
			break;
		default:
			cout << "Não é nenhuma das anteriores" << endl;
	}
	
	return 0;
}