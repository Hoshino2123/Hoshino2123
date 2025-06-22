#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Criar dois vetores vazios com 5 elementos cada
    vector<int> vetor1(8);
    vector<int> vetor2(8);
    
    // Vetor para armazenar a soma
    vector<int> somaVetores(8);
    
    cout << "Preencha o primeiro vetor (5 números inteiros):" << endl;
    for (int i = 0; i < 8; i++) {
        cout <<  "El " << i + 1 << ": ";
        cin >> vetor1[i];
    }
    
    cout << " Preencha o segundo vetor (5 números inteiros):" << endl;
    for (int i = 0; i < 8; i++) {
        cout << " EL " << i + 1 << ": ";
        cin >> vetor2[i];
    }
    
    // Calcular a soma dos vetores
    for (int i = 0; i < 8; i++) {
        somaVetores[i] = vetor1[i] + vetor2[i];
    }
    
    // Mostrar o vetor resultante
    cout << " Vetor soma:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << somaVetores[i] << " ";
    }
    cout << endl;
    
    return 0;
}
/* Cria dois vetores (vetor1 e vetor2) com capacidade para 5 elementos inteiros cada

Cria um terceiro vetor (somaVetores) para armazenar os resultados

Preenche os dois primeiros vetores com valores fornecidos pelo usuário

Realiza a soma elemento por elemento e armazena no terceiro vetor

Exibe o vetor resultante da soma */

