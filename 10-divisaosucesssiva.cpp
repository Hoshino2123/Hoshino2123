#include <iostream>

using namespace std;

int main() {
    int A; //variável
    int B; //variável
    cout << "introduza 2 numeros";  //pede ao user pra escrever 2 nºs = operador de saída.
    cin >> A >> B; //lê informações dada pelo user
    int dividir = 0; //cria variável dividir com o valor 0

    while (A >= B) { //repete 0 ou + vezes
        A -= B; //faz a divisão sucessiva
        dividir++; //faz a divisão sucessiva
    }
   
    cout << " o resultado da divisão de a por b é:" << dividir << endl;  // imprime resultado da divisão
    return 0;
}