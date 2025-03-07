/***********************************************************************
NOTA sobre a formatação de números (#include <iomanip>)
------------------------------------------------------------------------

	cout << setw(n); // define o total de espaços para escrever o valor

	cout << setfill(car); // define qual o caracter de preenchimento

	cout << setprecision(n); // define "n" como o nº máximo de
							 // dígitos a mostrar (excluindo o ".")
							 
	cout << fixed;	// fixa o número de casas decimais
					// se necessário acrescenta zeros à direita
					
	cout << scientific; // mostrar o valor em notação científica

	Após o fixed ou o scientific, o set precision passa a definir
	o n de casas decimais (em vez de ser o nº de dígitos) a mostrar

	cout << defaultfloat; // anula o "fixed" e o "scientific"

************************************************************************/	

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	cout << "Tabela alinhada à direita\n";
	// setw() define o total de espaços para escrever o valor
	cout << setw(5) << 12 << endl;
	cout << setw(5) << 123 << endl;
	cout << setw(5) << 8 << endl;
	// resultado: os números ficam alinhados à direita
	// muito útil para fazer tabelas
	
	
	cout << "\nEm vez do espaço, podemos usar outro caracter para preencher\n";
	// setfill() define qual o caracter a usar para preenchimento
	// caso não queiramos usar o espaço
	// Note que só é preciso usar uma vez o setfill()
	cout << setfill('-');
	cout << setw(5) << 12 << endl;
	cout << setw(5) << 123 << endl;
	cout << setw(5) << 8 << endl;
	cout << setfill(' ');

	// Exemplos para formatar as casas decimais
	cout << "\nNúmeros com vírgulas:\n";
	cout << 3.1416 << endl;
	cout << 12.3 << endl;
	cout << 1.23 << endl;

	cout << "\nPara alinhar números com vírgulas, pela vírgula, o \'setw()\' não chega.\n";
	cout << setw(6) << 3.1416 << endl;
	cout << setw(6) << 123.4 << endl;
	cout << setw(6) << 1.23 << endl;
	
	cout << "\nO \'setprecision()\' determina o número máximo de dígitos a mostrar,\n"
		 << "onde se inclui a parte inteira e a parte decimal (o \'.\' não conta).\n"
		 << "Neste exemplo usei \'setprecision(3)\'.\n";
	cout << setprecision(3);
	cout << 3.1416 << endl;
	cout << 123.4 << endl;
	cout << 1.23 << endl;
	
	cout << "\nSe usarmos o \'fixed\', o \'setprecision()\' passa a\n"
		 << "determinar o número de casas decimais.\n"
		 << "Neste exemplo usei \'fixed\' e \'setprecision(3)\'\n";
	cout << fixed << setprecision(3);
	cout << 3.1416 << endl;
	cout << 123.4 << endl;
	cout << 1.23 << endl;
	
	cout << "\nFinalmente, usando o \'setw()\' em conjunto com o \'fixed\' e o \'setprecision()\',\n"
		 << "conseguimos alinhar os valores decimais pelo \'.\'.\n"
		 << "Neste exemplo, usei \'fixed\', \'setprecision(3)\' e \'setw(7)\'.\n";
	cout << fixed << setprecision(3);
	cout << setw(7) << 3.1416 << endl;
	cout << setw(7) << 123.4 << endl;
	cout << setw(7) << 1.23 << endl;
	
	// Notação científica
	cout << "\nNotação científica (usando o \'scientific\').\n";
	cout << scientific;
	cout << 3.1416 << endl;
	cout << 123.4 << endl;
	cout << 1.23 << endl;


	cout << "\nO \'defaultfloat\' anula o \'fixed\' e o \'scientific\'.\n";
	cout << defaultfloat;
	cout << 3.1416 << endl;
	cout << 123.4 << endl;
	cout << 1.23 << endl;

	return 0;
}