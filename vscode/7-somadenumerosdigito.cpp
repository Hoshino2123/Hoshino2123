#include <iostream>
using namespace std;


int main() {
    int numero, resto, soma = 0; //variáveis

   
    cout << "insira um número inteiro para obter o soma dos digitos: "; //informação no ecrã.
    cin >> numero; //lê informações dadas pelo user.
        while (numero > 0) { // repete 0 ou mais vezes e executa enquanto o número for maior que 10
            resto = numero % 10; ///calcula o resto da divisão por 10 e armazena na variável soma.
            soma += resto; //adiciona o valor de resto à variável soma.
            numero /= 10;  //divide a variável numero por 10 e atribui o resultado de volta a numero.
    }
    cout << "a soma é " << soma << endl; //apresenta a soma e depois limpa o ecrã.
    return 0; 
}