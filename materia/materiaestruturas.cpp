#include <iostream>
#include <string>

using namespace std;

struct carro {
    string marca;
    string modelo;
    string preco;
};

constexpr int max= 20;

carro stand[max];
float valor = 0;
for(auto xxx: stand)
   valor=valor+xxx.preco;
cout << valor;
// só queremos saber o dinheiro do stand.

