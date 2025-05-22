#include <iostream>
using namespace std;

void descricao(){

	cout << "Exemplo para mostrar a diferença entre passar um parâmetro por valor\n";
	cout << "e passar um parâmetro por referência de endereço.\n";
	cout << "Conclusões:\n";
	cout << "  - Quando o parâmetro é passado por valor, as alterações feitas\n";
	cout << "    no interior da função não passam para o exterior\n";
	cout << "  - Quando o parâmetro é passado por referência de endereço, as\n";
	cout << "    alterações feitas no interior da função passam para o exterior\n\n";
	cout << "*******************************************************************\n";
}

// passagem por valor
// (o parâmetro é só de entrada)
void maisDez(int valor){
	valor = valor+10;
}

// passagem por referência de endereço
// (o parâmetro é de entrada e saída)
void maisVinte(int &valor){
	valor = valor+20;
}

// passagem por referência de endereço usando pointers
// (o parâmetro é de entrada e saída)
void maisTrinta(int *valor){
	*valor = *valor+30;
}

int main(int argc, char** argv) {
	int x = 4, y = 5, z = 6;
	
	descricao();
	cout << "Valores iniciais\n"
		 << "x=" << x 
		 << "  y=" << y
		 << "  z=" << z
		 << "\n\n";
	
	maisDez( x );
	cout << "x mais dez = " << x // resulta 4 (não soma 10)
		 << "\nPassagem por valor"
		 << "\nO valor não \"sai\" da função\n\n";
	
	maisVinte( y );
	cout << "y mais vinte = " << y  // resulta 25
		 << "\nPassagem por endereço"
		 << "\nOK\n\n";
	
	maisTrinta( &z );
	cout << "z mais trinta = " << z  // resulta 36
		 << "\nPassagem por pointer"
		 << "\nOK\n\n";
	
	return 0;
}