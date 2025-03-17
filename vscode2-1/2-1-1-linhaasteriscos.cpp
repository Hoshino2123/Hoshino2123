#include <iostream>
using namespace std;


int main () {
   int valor; //variável

   cout << "podes escrever o valor que queres para a linha de *"; // pede ao utilizador pra escrever o nº para linha de *
   cin >> valor; // lê o nº que escrever, ex:9

   for(int i=1; i<valor; i++) { //começa o for com i que é igual  a 1.
    //sempre que o i for menor que o valor que o user definiu vai adicionar 1.
    cout << "*";  //escreve a linha de *
   }

   cout << endl; //limpa o  ecrã.

 return 0;
}
    
