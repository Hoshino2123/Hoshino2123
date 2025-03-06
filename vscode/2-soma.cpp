#include <iostream>
using namespace std;

int main() {
    int valor; //variável.
    int soma = 0; // variável.

    cout << "valor ="; // pede ao user um valor.
    cin >> valor; //lê o valor.

    for(int i=1; i<=valor; i++) //sabe-se quanta vezes repete.
     //o for começa com i igual a 1, depos continua enquanto o i é menor ou igual á variavel valor, e a cada iteração incrementa 1
        soma += i; //faz a soma.
    
    cout << "Soma = " << soma; //apresenta a soma no ecrã-
    return 0;
}