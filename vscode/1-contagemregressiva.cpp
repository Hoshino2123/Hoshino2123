#include <iostream>
using namespace std;

void contagem_regressiva(int num) {
    if (num< 0) {
        cout << " insira um nº positivo." << endl; //pede ao user.
        return; //retorna.
    }

    for (int i = num; i >= 0; --i) { //sabe-se quantas vezes repete.
        // o for inicia em i com valor num, continua enquanto for maior ou igual a 0 e decrementa 1
        cout << i << endl; //limpa o ecrã.
    }
}

int main() {
    int num; //variável.
    cout << "Insira um nº positivo "; //pede ao user.
    cin >> num; //lê informações dada pelo user.

    contagem_regressiva(num); //faz a contagem regressiva de um nª.

    return 0; //retorna 0;
}