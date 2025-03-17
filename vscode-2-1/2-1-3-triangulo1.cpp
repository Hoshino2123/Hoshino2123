#include <iostream>
using namespace std;


int main () {
   int quantidade;

   cout << "podes escrever o valor  que queres para a linha de *";  // pede ao utilizador pra escrever o nº para linha de *
   cin >> quantidade; // lê o nº que escrever, ex:9

   for(int i=1; i<=quantidade; i++) { //começa o for com i que é igual  a 1.
    //sempre que o i for menor ou igual que o valor que o user definiu vai adicionar 1.
    for(int j=0; j<i; j++) //começa o for com i que é igual  a 1.
    //sempre que o i for menor que o valor que o user definiu vai adicionar 1.
        cout << "*"; //apresente o nº de astericos.
    
    cout << endl;  //limpa o ecrã.
   }
 return 0;
}