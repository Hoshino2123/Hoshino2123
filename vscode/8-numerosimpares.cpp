#include <iostream>

using namespace std;
int main() { //função principal

    int Numero; //VARIÁVEL INTEIRA

    cout << "Insira um Numero: "; //imprime na tela
    cin >> Numero;

    for(int i = 1; i <= Numero; i += 2) { //for=sabe-se quantas vezes é para repetir
        cout << i << " ";
    }

    cout << endl;

    return 0; //retorna 0
}










