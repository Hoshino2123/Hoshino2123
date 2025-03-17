#include <iostream>
using namespace std;


int main () {
   int l, c; //variáveis.

   cout << "nengue, escreve só as linhas de *"; //pede ao user para escrever as linhas de *.
   cin >> l;
   cout << "nengue , escreve só as colunas de  *";  //pede ao user para escrever as colunas de *.
   cin >> c;

   for(int i=0; i<l; i++) { //for para as linhas de *.

    for(int j=0; j<c; j++)  //for paras as colunas de .
    cout << "*"; // escreve a matriz de *.
   

   cout << endl; ///limpa o ecrã.
}

 return 0;
}
    