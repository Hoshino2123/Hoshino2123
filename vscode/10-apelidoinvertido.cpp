#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string nome_completo;

    cout << "Digite seu nome completo: ";
    getline(cin, nome_completo);

    size_t primeiro_espaco = nome_completo.find(' ');
    size_t ultimo_espaco = nome_completo.rfind(' ');

    if (primeiro_espaco != string::npos && ultimo_espaco != string::npos) {
        string primeiro_nome = nome_completo.substr(0, primeiro_espaco);
        string ultimo_apelido = nome_completo.substr(ultimo_espaco + 1);

        // Inverter o apelido
        reverse(ultimo_apelido.begin(), ultimo_apelido.end());

        cout << "Nome formatado: " << primeiro_nome << " " << ultimo_apelido << endl;
    } else {
        cout << "Nome incompleto: " << nome_completo << endl;
    }

    return 0;
}