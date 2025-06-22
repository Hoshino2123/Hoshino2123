#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vetor predefinido com 7 elementos
    vector<int> vetor = {23, 45, 12, 67, 89, 34, 56};
    int numero;
    bool encontrado = false;
    
    // Mostrar o vetor para referência (opcional)
    cout << "Vetor: ";
    for (int i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    // Pedir o número a pesquisar
    cout << "Digite um número inteiro para pesquisar no vetor: ";
    cin >> numero;
    
    // Pesquisar o número no vetor
    for (int i = 0; i < vetor.size(); i++) {
        if (vetor[i] == numero) {
            cout << "Número encontrado na posição " << i << " do vetor." << endl;
            encontrado = true;
            break; // Encerra a busca quando encontra
        }
    }
    
    // Se não encontrou
    if (!encontrado) {
        cout << "O número " << numero << " não foi encontrado no vetor." << endl;
    }
    
    return 0;
}
/* Cria um vetor predefinido com 7 valores inteiros

Mostra o vetor (para referência do usuário)

Solicita ao usuário um número para pesquisar

Percorre o vetor procurando o número

Se encontrar, mostra a posição (índice)

Se não encontrar, informa que o número não está no vetor*/