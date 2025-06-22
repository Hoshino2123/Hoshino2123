#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Criar um vetor vazio de inteiros
    vector<int> numeros;
    
    // Variável para armazenar a entrada do usuário
    int num;
    
    cout << "Digite cinco números inteiros:" << endl;
    
    // Ler 5 números do usuário e adicionar ao vetor
    for (int i = 0; i < 5; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> num;
        numeros.push_back(num); // Adiciona o número ao final do vetor
    }
    
    // Mostrar os números armazenados
    cout << " Números armazenados no vetor:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    return 0;
}
/*Como funciona:
Criamos um vetor vazio de inteiros chamado numeros

Usamos um loop for para ler 5 números do usuário

Cada número é adicionado ao vetor usando push_back()

Depois mostramos todos os elementos do vetor usando outro loop for */
