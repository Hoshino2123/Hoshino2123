#include <iostream>
using namespace std;

int main () {
    int v, soma = 0;
    cout << "valor = ";
    cin >> v;
    soma += v;  

    cout << "valor = ";
    cin >> v;
    soma += v;  

    cout << "valor = ";
    cin >> v;
    soma += v; 

    cout << "soma = " << soma << endl;  
    cout << "media = " << soma / 3 << endl;  
    return 0;
}