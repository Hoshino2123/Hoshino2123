#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    int metade = frase.length() / 2;
    string primeira_metade = frase.substr(0, metade);

    // Inverter a 1ª metade
    reverse(primeira_metade.begin(), primeira_metade.end());

    cout << "Primeira metade invertida: " << primeira_metade << endl;

    return 0;
}