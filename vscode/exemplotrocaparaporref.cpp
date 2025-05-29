
#include <iostream>
using namespace std;

void troa (int &p1, int &p2) { //o & é sempre necessário para passagem por referência.
    int aux;
    aux=p1;
    p1=p2;
    p2=aux;
    //ou da maneira mais fácil
    swap(p1,p2);
}