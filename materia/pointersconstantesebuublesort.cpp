/* POINTERS CONSTANTES:
PASSAGEM DE PARÂMETROS:
por pointer - entrada/saída
por pointer constante, só entrada.
ao usar pointer constantes na declaração da função:
não se pode alterar o valor apontado pelo pointer.
pode-se alterar o pointer em si 

#include <iostream>

using namespace std;

void myFunc(int *p1, const int *p2) {
     *p1 +=4;
     p1++;
    // *p2 +=4; dá erro porque é constante
     p2++;
}
    int main(){
        int v1=30,
         v2=20;

        myFunc(&v1, &v2);


        cout << "v1= " << v1 << endl
        << "v2= " << v2;

        return 0;
    } */

/* POINTERS PARA FUNÇÕES
cria-se um pointer que é do tipo da função.
indicam-se os tipos dos parâmetros dessa função

#include <iostream>

using namespace std;

int  soma( int v1, int v2){
    return v1+v2;
}
int subtrai( int v1, int v2){
    return v1-v2;
}
int mutiplica( int v1, int v2){
    return v1*v2;
}
int dividir( int v1, int v2){
    return v1/v2;
}

int main(){
    //declarar o pointer para a função
    int (*oper) (int,int);
    int n1, n2;
    char op;

    cout << "************\n"
    <<"* 1-somar       *\n"
    <<"* 2-subtrair    *\n"
    <<"* 3-dividir     *\n"
    <<"* 4-multiplicar *\n"
    <<"********        *\n"
    <<" opção: ";
    cin >> op;
    cout << "nº1= "; cin >> n1;
    cout << "nº2= "; cin >> n2;

    switch (op)
    {
    case '1':
        oper= soma;
        break;
    case '2':
        oper=subtrai;
        break;
    case '3':
        oper=dividir;
        break;
    case '4':
        oper=mutiplica;
    default:
        break;
    }
    cout << "resultado= " 
    << oper( n1,n2);

    return 0;
} */

/* BUBBLE SORT:
Algoritmo de  ordenação
É independente do total de items a ordenar*/

void bubblesort (int *arr, size_t DIM){
for (size_t i=0; i<DIM-1; i++)
  for (size.t j=0; j=DIM-1-i; j++)
  if(arr[j]>arr[j+1])
  swap(arr[j], arr[j++]);
}
for(size_t i=0, i<DIM-1&&troca;  i++){
    troca=false
    for(size.t j=0; j<DIM-1-i; j) {
    if(arr[j], arr[j+1]);
    swap(arr[j],arr[j+1]);
    troca=true
    }
}