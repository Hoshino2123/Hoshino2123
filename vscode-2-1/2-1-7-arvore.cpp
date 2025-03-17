#include <iostream>
using namespace std;

void arvoreDeAsteriscos(int altura) {
    // Parte superior da árvore
    for (int i = 0; i < altura; i++) {
        // Espaços antes dos asteriscos
        for (int j = 0; j < altura - i - 1; j++) {
            cout << " ";
        }
        // Asteriscos
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Tronco da árvore (centralizado)
    for (int i = 0; i < altura / 3; i++) {
        for (int j = 0; j < altura - 1; j++) {
            cout << " ";
        }
        cout << "|" << endl;
    }
}

int main() {
    int altura;
    cout << "Digite a altura da árvore: ";
    cin >> altura;

    arvoreDeAsteriscos(altura);

    return 0;
}