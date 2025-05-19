#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    int metade = frase.length() / 2;
    string segunda_metade = frase.substr(metade);

    // Inverter a 2ª metade
    reverse(segunda_metade.begin(), segunda_metade.end());

    cout << "Segunda metade invertida: " << segunda_metade << endl;

    return 0;
}