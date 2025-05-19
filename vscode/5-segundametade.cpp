#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    int metade = frase.length() / 2;

    // Extrair a 2ª metade (da metade até o fim)
    string segunda_metade = frase.substr(metade);

    cout << "Segunda metade: " << segunda_metade << endl;

    return 0;
}