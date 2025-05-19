#include <iostream>
#include <string>
#include <algorithm> // Para reverse()

using namespace std;

int main() {
    // 1. Criar variável para a frase
    string frase;

    // 2. Pedir a frase ao usuário
    cout << "Digite uma frase: ";
    getline(cin, frase);

    // 3. Inverter a string usando reverse()
    string frase_invertida = frase;
    reverse(frase_invertida.begin(), frase_invertida.end());

    // Mostrar resultado
    cout << "Frase invertida: " << frase_invertida << endl;

    return 0;
}