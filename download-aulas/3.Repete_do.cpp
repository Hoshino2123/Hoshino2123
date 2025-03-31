#include <iostream>
using namespace std;

/* Repetições usando um do...while */

int main(int argc, char** argv) {
	int a, tot=0;
	const int b=10;
	
	cout << "A = ";
	cin >> a;

	if( a<b ){
		do{
			tot++;
			a = a+2;
		}while( a<b );
	}

	cout << "Total de repetições = " << tot << endl;
	cout << "Fim";
	
	return 0;
}
