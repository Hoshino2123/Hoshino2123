#include <iostream>
using namespace std;

/****************************************************
 Operador ternário -> (condição) ? verdadeiro : falso
 É um if() com um else, tudo na mesma instrução
*****************************************************/

int main(int argc, char** argv) {
	int x, y;
	
	cout << "Valor de x = ";
	cin >> x;
	
	// solução clássica
	if(x>3){
		y = x+1;
	}
	else{
		y = x+10;
	};
	cout << "y = " << y << endl;
	
	// faz o mesmo que o bloco anterior
	(x>3) ? y = x+1 : y = x+10;
	cout << "y = " << y << endl;
	
	// versão otimizada: também faz o mesmo que o bloco anterior
	y = (x>3) ? x+1 : x+10;
	cout << "y = " << y;

	// Resumo dos testes
	cout << "\n\nEste código:\n"
		 << "if(x>3){\n"
		 << "  y = x+1;\n"
		 << "}\n"
		 << "else{\n"
		 << "  y = x+10;\n"
		 << "}\n"
		 << "\n\nPode-se fazer desta forma:\n"
		 << "(x>3) ? y = x+1 : y = x+10;\n"
		 << "\n\nou, ser otimizado para:\n"
		 << "y = (x>3) ? x+1 : x+10;\n";

	return 0;
}