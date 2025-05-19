#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    // Calcular o ponto médio
    int metade = frase.length() / 2;

    // Extrair a 1ª metade (do início até a metade)
    string primeira_metade = frase.substr(0, metade);

    cout << "Primeira metade: " << primeira_metade << endl;

    return 0;
}