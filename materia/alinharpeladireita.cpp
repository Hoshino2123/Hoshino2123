// alinhar nºs pela direita em 3 passos

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // cout << scientific; //fica tudo em notação cientifica;
    cout << fixed; //adiciona 4 zeros ao número decimal
    cout << setprecision(2); //define a precisão de zeros nos números decimais;
    cout << setfill ('=');
    cout << setw(7) << (float) 2 << endl; //setw define a largura
    cout << setw(7) << (float)  30 <<endl; //setw define a largura
    cout << setw (7) << (float)  4.3 << endl;//setw define a largura
    cout << setw (7) << (float)  380 << endl; //setw define a largura
    cout << defaultfloat;
    cout << setw (5) << 8.0;
  
}
