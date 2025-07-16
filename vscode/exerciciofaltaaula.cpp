// 1.
#include <iostream> // Para uso de entrada/saída (caso queira testar)

// Função que soma dois arrays e verifica se a soma total é não negativa
bool soma(int array1[], int array2[], int resultado[], int dimensao) {
    int somaTotal = 0;  // Variável para acumular a soma de todos os elementos
    
    // Loop através de todos os elementos dos arrays
    for (int i = 0; i < dimensao; i++) {
        // Soma os elementos correspondentes dos dois arrays
        resultado[i] = array1[i] + array2[i];
        
        // Adiciona o valor somado ao total acumulado
        somaTotal += resultado[i];
    }
    
    // Retorna true se a soma total for maior ou igual a zero, senão false
    return (somaTotal >= 0);
}

/* Explicação detalhada:
1. Parâmetros:
   - array1[]: Primeiro vetor de inteiros
   - array2[]: Segundo vetor de inteiros
   - resultado[]: Vetor onde serão armazenadas as somas
   - dimensao: Tamanho comum dos três vetores

2. Funcionamento interno:
   a) Inicializa 'somaTotal' com 0 para acumular o total das somas
   b) Percorre cada posição dos vetores usando um loop for:
      - Para cada índice i (de 0 a dimensao-1):
        * Calcula a soma dos elementos na posição i dos dois arrays
        * Armazena o resultado no vetor de saída na mesma posição
        * Adiciona o valor da soma ao acumulador 'somaTotal'
   c) Ao final do loop, verifica se o total acumulado é >= 0
   d) Retorna true se a condição for satisfeita, false caso contrário

3. Características importantes:
   - Os três arrays devem ter pelo menos 'dimensao' elementos
   - A função não altera os arrays originais de entrada (array1 e array2)
   - A complexidade é O(n) (linear com relação à dimensão)
   - O valor de retorno é baseado na soma total de todos os elementos
Pontos chave da implementação:

Percorre todos os elementos: Usa um loop for para acessar cada posição dos arrays

Soma elemento a elemento: Para cada índice i, calcula array1[i] + array2[i]

Armazena resultados: Preenche o array resultado com as somas parciais

Acumula o total: Mantém um contador com a soma cumulativa de todos os elementos

Verificação final: Retorna true se o total for não negativo, false caso contrário */

// 2.
bool encontraCaracter(char array[], int dimensao, char pesquisar) {
    for (int i = 0; i < dimensao; i++) {
        if (array[i] == pesquisar) {
            return true;  // Retorna true ao encontrar a primeira ocorrência
        }
    }
    return false;  // Retorna false se não encontrou nenhuma ocorrência
}
// modificado:
bool encontraCaracter(char array[], int dimensao, char pesquisar, int& totalOcorrencias) {
    totalOcorrencias = 0;  // Inicializa o contador
    
    for (int i = 0; i < dimensao; i++) {
        if (array[i] == pesquisar) {
            totalOcorrencias++;  // Incrementa o contador para cada ocorrência
        }
    }
    
    return (totalOcorrencias > 0);  // Retorna true se encontrou pelo menos uma ocorrência
}
/*Explicação detalhada:

Parâmetros comuns a ambas versões:

array[]: Array de caracteres onde será feita a pesquisa

dimensao: Tamanho do array

pesquisar: Caracter a ser procurado

Versão básica:

Percorre o array até encontrar o caracter

Retorna true imediatamente ao encontrar a primeira ocorrência

Retorna false se percorrer todo o array sem encontrar

Versão modificada:

Adiciona o parâmetro totalOcorrencias (passado por referência usando &)

Conta todas as ocorrências do caracter no array

Atualiza o parâmetro totalOcorrencias com o valor contado

Retorna true se encontrou pelo menos uma ocorrência, false caso contrário*/
//3.
#include <iostream>
#include <vector>
using namespace std;

void escreverInverso(const vector<int>& numeros) {
    // Percorre o vetor do último ao primeiro elemento
    for (int i = numeros.size() - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;  // Quebra de linha no final
}
