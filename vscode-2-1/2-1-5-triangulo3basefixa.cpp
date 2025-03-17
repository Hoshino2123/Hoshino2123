#include <iostream>
using namespace std;


int main () {
   int quantidade; //variável
   cout << "podes escrever o tamanho que queres para a linha de *"; //pede ao user o  tamanho da linha de *
   cin >> quantidade; //lê a variável.

   for(int i=1; i<= quantidade+1; i++) {  //o for das linhas começa com a variável.
    //se o i for menor ou igual á variável+1 aumenta 1
    for(int j=0; j<i; j++)  //o for das linhas começa com a variável.
    //se o j for menor a i vai aumentando  1.
        cout << "*"; //apresenta os *
    
    cout << endl; //limpa o ecrã.
   }
   for(int i=quantidade; i >= 2; i--) {  //o for das linhas começa com a variável.
    //se o i for maior ou igual a 2 vai diminuindo 1.
    for(int j=0; j<i; j++)  //o for das linhas começa com a variável.
    //se o i for maior que i vai aumentando 1.
        cout << "*"; //apresent aos ª
    
    cout << endl; //limpa o ecrã.
}
 return 0;

}
