#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool removeX(vector<int>& vec, int x) {
    // Guarda o tamanho original antes da remoção
    size_t tamanho_original = vec.size();
    
    // Remove todos os elementos iguais a x
    vec.erase(remove(vec.begin(), vec.end(), x), vec.end());
    
    // Retorna true se algum elemento foi removido
    return vec.size() < tamanho_original;
}

int main() {
    // Teste 1: Vetor com elementos a remover
    vector<int> v1 = {1, 2, 3, 4, 2, 5, 2};
    cout << "Vetor original: ";
    for (int num : v1) cout << num << " ";
    cout << endl;
    
    bool removido = removeX(v1, 2);
    cout << "Após remover 2: ";
    for (int num : v1) cout << num << " ";
    cout << " Foi removido? " << boolalpha << removido << endl << endl;

    // Teste 2: Vetor sem o elemento a remover
    vector<int> v2 = {1, 3, 5, 7};
    cout << "Vetor original: ";
    for (int num : v2) cout << num << " ";
    cout << endl;
    
    removido = removeX(v2, 2);
    cout << "Após tentar remover 2: ";
    for (int num : v2) cout << num << " ";
    cout << " Foi removido? " << boolalpha << removido << endl << endl;

    // Teste 3: Vetor vazio
    vector<int> v3;
    cout << "Vetor vazio" << endl;
    
    removido = removeX(v3, 1);
    cout << "Após tentar remover 1: ";
    for (int num : v3) cout << num << " ";
    cout << " Foi removido? " << boolalpha << removido << endl << endl;

    // Teste 4: Todos elementos iguais ao valor
    vector<int> v4 = {4, 4, 4, 4};
    cout << "Vetor original: ";
    for (int num : v4) cout << num << " ";
    cout << endl;
    
    removido = removeX(v4, 4);
    cout << "Após remover 4: ";
    for (int num : v4) cout << num << " ";
    cout << " nFoi removido? " << boolalpha << removido << endl;

    return 0;
}
/* Funcionamento da função removeX():
Parâmetros:

Recebe um vetor por referência (para poder modificá-lo)

Recebe um inteiro x que será o valor a ser removido

Lógica de remoção:

Usa o algoritmo remove da STL para mover os elementos a serem removidos para o final

Usa erase para efetivamente remover esses elementos

Valor de retorno:

Compara o tamanho antes e depois da remoção

Retorna true se algum elemento foi removido, false caso contrário

Casos especiais:

Funciona corretamente com vetor vazio

Trata corretamente quando todos elementos são iguais ao valor

Funciona quando não há elementos para remover*/