#include <iostream>
using namespace std;


int main () {
   int tamanho; //variável

   cout << "podes escrever o tamanho que queres para a linha de *"; // pede ao utilizador pra escrever o tamanho para linha de *
   cin >> tamanho; // lê o tamanho que escrever, ex:9

   for(int i=1; i<tamanho; i++) { //começa o for com i que é igual  a 1.
    //sempre que o i for menor que o tamanho que o user definiu vai adicionar 1.
    cout << "*";  //escreve a linha de *
   }

   cout << endl; //limpa o  ecrã.

 return 0;
}
    
