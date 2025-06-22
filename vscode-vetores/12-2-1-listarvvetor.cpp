#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Função para listar vetor de inteiros (elementos separados por espaço)
void listInt(const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        // Adiciona espaço apenas entre elementos (não após o último)
        if (i < vec.size() - 1) {
            cout << " ";
        }
    }
    cout << endl; // Nova linha no final
}

// Função para listar vetor de strings (um elemento por linha)
void listString(const vector<string>& vec) {
    for (const auto& str : vec) {
        cout << str << endl;
    }
}

int main() {
    // Teste com vetor de inteiros
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "Vetor de inteiros: ";
    listInt(numeros);

    // Teste com vetor de strings
    vector<string> frutas = {"Maçã", "Banana", "Laranja", "Uva"};
    cout << "\nLista de frutas:\n";
    listString(frutas);

    // Teste com vetor vazio
    vector<int> vazio;
    cout << " Vetor vazio: ";
    listInt(vazio);

    return 0;
}
/* Características das funções:
listInt():

Recebe um vector<int> por referência constante

Imprime os elementos separados por espaços

Não coloca espaço após o último elemento

Adiciona endl no final

listString():

Recebe um vector<string> por referência constante

Imprime cada string em uma linha separada

Usa range-based for loop para melhor legibilidade

main():

Demonstra o uso das funções com diferentes casos:

Vetor de inteiros

Vetor de strings

Vetor vazio (caso especial)

*/


