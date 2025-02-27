#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    int v;          
    int soma = 0;   

    while (contador < 3) {
        cout << "valor = ";
        cin >> v;
        soma = soma + v;
        contador++;
    }

    cout << "A soma dos valores 3: " << soma << endl;

    return 0;
}