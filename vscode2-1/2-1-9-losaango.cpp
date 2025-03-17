#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nengue, escreve um valor: ";
    cin >> n;
    
    // Parte superior
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Parte inferior
    for (int i = n-1; i >= 1; i--) {
        for (int j = 0; j < 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}