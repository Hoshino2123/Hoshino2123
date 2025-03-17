
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nengue, escreve um valor: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        // Espaços antes dos asteriscos
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Asteriscos
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}