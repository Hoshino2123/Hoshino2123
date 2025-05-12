//1- ARRAY DE CHAR
#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main(){
    char nome [20],
    apelidos [60],
    nomeCompleto [80];

    cout << "nome próprio=";
    cin >> nome;
    cout << "apelidos(s)=";
    //para poder ler os espaços;
    cin.ignore();   //é necessário sempre que se faz getline dps de ter feito um cin
    cin.getline(apelidos, 60); 
    //construir o nome completo;
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, apelidos);
    
    for(size_t i=0;i<strlen(nomeCompleto);i++) { for (size_t i=strlen(nomeCompleto;)-1;i<=0;i--)
        //i++=percorrer array
        //i--=percorrer do fim ao princípio
        cout << nomeCompleto[i];
        Sleep(150); //precisa do <windows.h
    }
    return 0;
}


//2-objeto string
string nome,apelidos,
       nomeCompleto;
cout << "nome próprio=";
cin >> nome;
cout << "apelido(s)=";
cin.ignore();
getline(cin,apelidos);
nomeCompleto=nome+ '' +apelidos;
for(size_t i=0;i<nomeCompleto.size();i++) {
   //em vez de .size() pode-se usar .length()
   cout <<nomeCompleto[i]
   sleep(150);
   return 0;
}