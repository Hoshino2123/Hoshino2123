//Passagem do valor
//somar 2 valores
//e escrever o resultado no ecrã


#include <iostream>
using namespace std;

//void soma (int v1, int v2) { void = variavel que não devolve nada
//int res;
//res=v1+v2;
//cout << "soma = " <<res;
//}


//int main(){
  //  int n1,n2;

    //cout << endl << endl;
    //cout <<"n1 = "; cin>>n1;
    //cout << "n2 = "; cin>>n2;
    //chamar a função
    //soma (n1,n2);
    //return 0;
//}

//somar 2 valores e devolver o nº

int soma(int v1, int v2){
   int res;
    res=v1 + v2;
    return res;
 }
 //int = variável  para nº inteiros.

              //Alterações//
int main(){
    int  n1, n2, r;
    cout << "n1 = "; cin >> n1;
    cout << "n2 = "; cin >> n2;
    //chamar a função
    r=soma(n1, n2);

    cout << "resultado = " << r;
    return 0;

}