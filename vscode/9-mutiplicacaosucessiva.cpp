#include <iostream>

using namespace std;

int main() {
    int A; //variável
    int B; //variável
    int resultado =0; //variável
    cout << "introduza 2 numeros"; //pede ao user pra escrever 2 nºs = operador de saída.
    cin >> A >> B; //lê informações dada pelo user

    int produto=0; // cria a variável produto com valor 0

    for(int i=0; i <B; i++) //sabemos quantas vezes é pra repetir.
    //for  começa com i igual a 0, continua enquanto B for menor que 0 e incrementa 1.
    resultado +=A; //multiplica

    cout << " o resultado " << A << " e " << B <<  " é " << resultado << endl; //Imprime o resultado da multiplicação
    return 0;
}