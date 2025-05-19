
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome_completo;

    cout << "Digite seu nome completo: ";
    getline(cin, nome_completo);

    // Encontrar o último espaço
    size_t pos = nome_completo.rfind(' ');

    if (pos != string::npos) {
        string ultimo_apelido = nome_completo.substr(pos + 1);
        cout << "Último apelido: " << ultimo_apelido << endl;
    } else {
        cout << "Nome sem espaços: " << nome_completo << endl;
    }

    return 0;
}