#include <iostream>
using namespace std;

int main() {
    int expoente = 0; //variável

    while (true) { //repete 0 ou + vezes.
        int resultado = 1 << expoente; //faz a potência do 2
        cout << "2^" << expoente << " = " << resultado << endl; //apresenta a potência do 2 e depois limpa o ecrã.

        if (resultado > 1000) { //se o resultado é maior que 1000 para.
            break;
        }

        expoente++; //incrementa o valor em 1.
    }

    return 0; //retorna 0 
}