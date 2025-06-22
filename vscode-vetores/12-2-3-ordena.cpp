#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& vec) {
    if (vec.size() <= 1) {
        return true; // Vetor vazio ou com 1 elemento está sempre ordenado
    }

    bool crescente = true;
    bool decrescente = true;

    // Verifica se está em ordem crescente ou decrescente
    for (size_t i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i+1]) {
            crescente = false;
        }
        if (vec[i] < vec[i+1]) {
            decrescente = false;
        }
        
        // Se já não é nenhum dos dois, pode parar
        if (!crescente && !decrescente) {
            return false;
        }
    }

    return crescente || decrescente;
}

int main() {
    // Testes com diferentes vetores
    vector<int> v1 = {1, 2, 3, 4, 5};       // Crescente
    vector<int> v2 = {5, 4, 3, 2, 1};       // Decrescente
    vector<int> v3 = {1, 3, 2, 4, 5};       // Não ordenado
    vector<int> v4 = {1};                    // Único elemento
    vector<int> v5 = {};                     // Vazio
    vector<int> v6 = {1, 1, 1, 1};           // Constante
    vector<int> v7 = {1, 2, 2, 3, 4};        // Crescente com repetição
    vector<int> v8 = {5, 4, 4, 3, 1};        // Decrescente com repetição

    cout << boolalpha; // Para mostrar true/false em vez de 1/0
    cout << "v1 (crescente): " << isSorted(v1) << endl;
    cout << "v2 (decrescente): " << isSorted(v2) << endl;
    cout << "v3 (nao ordenado): " << isSorted(v3) << endl;
    cout << "v4 (um elemento): " << isSorted(v4) << endl;
    cout << "v5 (vazio): " << isSorted(v5) << endl;
    cout << "v6 (constante): " << isSorted(v6) << endl;
    cout << "v7 (crescente com rep): " << isSorted(v7) << endl;
    cout << "v8 (decrescente com rep): " << isSorted(v8) << endl;

    return 0;
}
/* Funcionamento da função isSorted():
Tratamento de casos especiais:

Se o vetor tem 0 ou 1 elemento, retorna true (considerado ordenado)

Verificação simultânea:

Verifica se está em ordem crescente E/OU decrescente

Usa duas flags booleanas (crescente e decrescente)

Otimização:

Se ambas as flags se tornarem false durante a verificação, retorna imediatamente

Evita verificações desnecessárias

Casos de borda:

Funciona corretamente com valores repetidos

Trata vetor vazio corretamente*/
