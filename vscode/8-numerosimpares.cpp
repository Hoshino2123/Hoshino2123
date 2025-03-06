#include <iostream>

using namespace std;
int main() { //função principal

    int Numero; //VARIÁVEL INTEIRA

    cout << "Insira um Numero: "; //imprime na tela
    cin >> Numero; //lê informações dadas pelo user

    for(int i = 1; i <= Numero; i += 2) { //for =sabe-se quantas vezes é para repetir
         // o for inicia com 2, continua a executar até q o i seja menor ou igual á variável número, e a cada iteração incrementa 2.
        cout << i << " "; //informação no ecrã
    }

    cout << endl; //informação e limpa o ecrã

    return 0; //retorna 0
}










