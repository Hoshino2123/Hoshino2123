#include <iostream>
using namespace std;


int main () {
   int quantidade; //variável
   cout << "podes escrever o tamanho que queres para a linha de *"; //pede ao user o  tamanho da linha de *
   cin >> quantidade; //lê a variável.

   for(int i=quantidade; i>=1; i--) { //o for das linhas começa com a variável.
    //se o i for maior ou igual a 1 vai diminuindo 1.
    for(int j=0; j<i; j++) { //for das colunas começas com j=0.
      //se o j for menor que i vai adicionando 1.
        cout << "*"; //escreve o triângulo invertido de *.
    }
    cout << endl;  //limpa o ecrã.
   }
 return 0; //fim do programa.
}
    
