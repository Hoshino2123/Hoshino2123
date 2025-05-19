


#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome_completo;

    cout << "Digite seu nome completo: ";
    getline(cin, nome_completo);

    // Encontrar a posição do primeiro espaço
    size_t pos = nome_completo.find(' ');

    if (pos != string::npos) { // Se encontrou um espaço
        string primeiro_nome = nome_completo.substr(0, pos);
        cout << "Primeiro nome: " << primeiro_nome << endl;
    } else {
        cout << "Nome sem espaços: " << nome_completo << endl;
    }

    return 0;
}