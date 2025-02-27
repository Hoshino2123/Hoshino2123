#include <iostream>
using namespace std;

int main() {
    int fatorial = 1;
    int Numero;

    cout << "insire um Numero: ";
    cin >> Numero;

    for (int i = 1; i <= Numero; i++) {
        fatorial *= i;
    }

    cout << "O fatorial de " << Numero << " e " << fatorial << endl;

    return 0;
}