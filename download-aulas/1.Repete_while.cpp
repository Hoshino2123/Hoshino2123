#include <iostream>
using namespace std;

/* Repetições usando um while */

int main(int argc, char** argv) {
	int a, tot=0;
	const int b=10;
	
	cout << "A = ";
	cin >> a;

	while( a<b ){
		tot++;
		a = a+2;
	}

	cout << "Total de repetições = " << tot << endl;
	cout << "Fim";
	
	return 0;
}
