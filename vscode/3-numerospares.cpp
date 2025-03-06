#include <iostream>

using namespace std;

int main() {

int Numero; //variável

cout << "escreve um Numero: "; //pede ao user pra escrever um nº.
cin >> Numero; //lê o nº.

for(int i = 2; i <= Numero; i += 2) { //sabe-se quantas vezes repete. 
    // o for inicia com 2, continua a executar até q o i seja menor ou igual á variável número, e a cada iteração incrementa 2.

cout << i << " "; //apresenta  os nº pares.

}
cout << endl; //endl é pra limpar o ecrã.

return 0;

}









