#include <iostream>
using namespace std;

int main() {
    int fatorial = 1; //variável.
    int Numero; //variável.

    cout << "insire um Numero: "; //pede ao user pra escrever um nº
    cin >> Numero; //lê o nº

    for (int i = 1; i <= Numero; i++) { //sabe-se quantas vezes repete
        //o for começa com i igual a 1, depos continua enquanto o i é menor ou igual á variavel número e a cada iteração incrementa 1
        fatorial *= i; //calcula o fatorial.
    }

    cout << "O fatorial de " << Numero << " e " << fatorial << endl; //apresenta os fatoriais no ecrã e limpa depois.

    return 0;
}