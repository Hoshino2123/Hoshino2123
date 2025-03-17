#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nengue, escreve um valor: ";
    cin >> n;
    
    // Parte da árvore
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Pé da árvore (n linhas)
    for (int i = 0; i < n; i++) {
        cout << "*" << endl;
    }
    return 0;
}