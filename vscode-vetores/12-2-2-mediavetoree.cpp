#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Criar um vetor para guardar 10 números reais
    vector<double> numeros(10);
    double soma = 0.0;
    
    cout << "Digite 10 números reais:" << endl;
    
    // Ler os 10 números do user
    for (int i = 0; i < 10; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
        soma += numeros[i]; // Acumula a soma
    }
    
    // Calcular a média
    double media = soma / 10;
    
    // Mostrar o resultado
    cout << " A média dos números é: " << media << endl;
    
    return 0;
}
/* Funcionamento do programa:
Cria um vetor numeros com tamanho 10 para armazenar números reais (double)

Declara uma variável soma para acumular o total

Usa um loop para ler os 10 números do usuário e armazená-los no vetor

Durante a leitura, já vai acumulando a soma dos valores

Calcula a média dividindo a soma por 10

Exibe o resultado da média*/
