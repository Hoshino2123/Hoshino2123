#include <iostream>
using namespace std;

int main() {
    const int tamanho = 20; // Tamanho do array
    double notas[tamanho]; // Array para armazenar as notas

    // 1- Pedir as notas e ler os valores para o array
    cout << "Digite as " << tamanho << " notas ";
    for (int i = 0; i < tamanho; i++) {
        cout << "Nota " << i + 1 << " : ";
        cin >> notas[i];
    }

    // 2- Escrever as notas lidas
    cout << " Notas escritas ";
    for (int i = 0; i < tamanho; i++) {
        cout << " Nota " << i + 1 << " : " << notas[i] << endl;
    }

    // 3- Escrever novamente1 o array, mas por ordem inversa
    cout << " Notas em ordem inversa: ";
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << "Nota " << tamanho - i << ": " << notas[i] << endl;
    }

    return 0;
}