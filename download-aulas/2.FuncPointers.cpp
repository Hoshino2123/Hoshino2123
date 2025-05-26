/***********************************************************
 * Utilização de pointers para funções
 * O objetivo é ter uma variável do tipo pointer, cujo
 * conteúdo será o nome da função que se pretende executar
 * 
 * NOTA: Ao declarar o pointer é necessário saber
 *          - o tipo da função
 *          - o tipo dos parâmetros da função
 */
#include <iostream>
using namespace std;

// Funções para operações matemáticas
int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if (b != 0) return a / b;
    cout << "Erro: Divisão por zero!" << endl;
    return 0;
}

int main() {
    // Definir um pointer para função
    int (*operacao)(int, int);
    // A função é do tipo int e recebe como parâmetros, dois int

    // Valores de exemplo
    int x = 10, y = 5;

    // Apontando o pointer para a função "somar"
    operacao = somar;
    cout << "Soma: " << operacao(x, y) << endl;

    // Apontando o pointer para a função "subtrair"
    operacao = subtrair;
    cout << "Subtração: " << operacao(x, y) << endl;

    // Apontando o pointer para a função "multiplicar"
    operacao = multiplicar;
    cout << "Multiplicação: " << operacao(x, y) << endl;

    // Apontando o pointer para a função "dividir"
    operacao = dividir;
    cout << "Divisão: " << operacao(x, y) << endl;

    return 0;
}
