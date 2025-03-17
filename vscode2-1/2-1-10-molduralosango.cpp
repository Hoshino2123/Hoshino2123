#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nengue, escreve um valor: ";
    cin >> n;
    
    // Linha superior
    for (int j = 0; j < 4*n + 1; j++) {
        cout << "*";
    }
    cout << endl;
    
    // Parte central com espaços
    for (int i = 1; i <= 2*n; i++) {
        cout << "*";
        for (int j = 0; j < 2*n - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    
    // Linha inferior
    for (int j = 0; j < 4*n + 1; j++) {
        cout << "*";
    }
    return 0;
}