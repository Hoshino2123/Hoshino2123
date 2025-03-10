#include <iostream>
using namespace std;

int main() {
    int expoente = 0; //variável, o << é o operador de deslocamento á esquerda.
        //desloca os bits do número à esquerda pelo número de posições especificado à direita do operador. 
        //Cada deslocamento à esquerda equivale a multiplicar o número por 2.

    while (true) { //repete 0 ou + vezes.
        int resultado = 1 << expoente; //faz a potência do 2
        cout << "2^" << expoente << " = " << resultado << endl; //apresenta a potência do 2 e depois limpa o ecrã.

        if (resultado > 1000) { //se o resultado é maior que 1000 para.
            break;
        }

        expoente++; //incrementa o valor em 1.
    }

    return 0; //retorna 0 
}

#include <iostream> //não ter de usar o std.
#include <cmath> //bibloteca para funções matemáticas.
#include <bitset> //escrever números em biinário.
using namespace std;
   int main() {
    cout << " potências de 2: "; //apresenta as potências de 2.
    //for(int i=9; i>=0; i++) //começa com i que é igual a 9.
     //depois quando o i é maior ou igual a 0 vai aumentando 1.
    for(int i = 9; i>=0; i--) { //começa com i que é igual a 9.
        //depois quando o i é maior ou igual a 0 vai diminuindo 1.
        cout << pow(2,i) << ' ';
    }

    
  
   }

