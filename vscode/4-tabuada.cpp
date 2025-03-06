#include <iostream>

using namespace std;
int main (void) {
    int num, aux=1; //variáveis.
  
    cout <<" insira o numero para a tabuada:";  //pede ao user um nº.
    cin >> num; //lê o nº.

    for(aux=1 ; aux<=10;  aux++) //sabe-se quantas vezes é para repetir.
    // o for começa com aux que é 1, continua a executar enquanto o valor é menor ou igual a 10 e a cada iteração incrementa 1.
    cout <<num<< "*" <<aux<< "=" <<num*aux <<endl; //apresenta a tabuada e limpa o ecrã.
    return 0; //fim do programa.

}