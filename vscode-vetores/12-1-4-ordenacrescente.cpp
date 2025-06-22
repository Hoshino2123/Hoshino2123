#include <iostream>
#include <vector>
#include <algorithm> // Para usar a função sort

using namespace std;

int main() {
    int tamanho;
    
    // Perguntar ao user o tamanho do vetor
    cout << "Escreve o tamanho do vetor: ";
    cin >> tamanho;
    
    // Criar vetor com o tamanho especificado
    vector<int> vetor(tamanho);
    
    // Preencher o vetor com valores do usuário
    cout << "Escreve  " << tamanho << " números inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }
    
    // Ordenar o vetor em ordem crescente
    sort(vetor.begin(), vetor.end());
    
    // Mostrar o vetor ordenado
    cout << " Vetor ordenado em ordem crescente:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}
/* Funcionamento do programa:
Pede ao user pra definir o tamanho do vetor

Cria um vetor de inteiros com o tamanho especificado

Preenche o vetor com valores fornecidos pelo usuário

Ordena o vetor em ordem crescente usando a função sort da biblioteca <algorithm>

Exibe o vetor ordenado*/

