#include <iostream>
using namespace std;
/**************************************
	Dados 3 valores, dizer qual é 
	o maior (ou maiores)
**************************************/

int main(int argc, char** argv) {
	int n1, n2, n3;
	
	// ler os 3 valores
	cout << "Valor 1 = "; cin >> n1;
	cout << "Valor 2 = "; cin >> n2;
	cout << "Valor 3 = "; cin >> n3;
	
	// testar
	if(n1>n2){
		if(n1>n3){
			cout << "Valor 1 é o maior";
		}else if(n1==n3){
			cout << "Valores 1 e 3 são maiores";
		}else{
			cout << "Valor 3 é o maior";
		}
	}else if(n2>n3){
		if(n1==n2){
			cout << "Valores 1 e 2 são os maiores";
		}else{
			cout << "Valor 2 é o maior";
		}
	}else if(n2==n3){
		if(n1==n2){
			cout << "São todos iguais";
		}else{
			cout << "Valores 2 e 3 são os maiores";
		}
	}else{
		cout << "Valor 3 é o maior";
	}
	
	return 0;
}