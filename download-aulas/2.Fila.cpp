/**************************************************************************************
 * Manipulação de uma fila com base numa lista SIMPLESMENTE ligada
 * 
 * Funções feitas:
 *  qInsTail()      -> inserir elemento no fim (cauda) da fila
 *  qDelHead()      -> remover o primeiro (cabeça) elemento da fila
 *  List()          -> listar todos os elementos da fila, começando pelo início (cabeça)
 *  qReverseList()  -> listar todos os elementos da fila, começando pelo fim (cauda)
 * 
 *  getData()       -> função específica para input de dados neste exemplo
 *                     (esta função irá mudar de acordo com a estrutura em questão)
 *  putData()       -> função específica para output de dados deste exemplo
 *                     (esta função irá mudar de acordo com a estrutura em questão)
 * Funções por fazer:
 */

#include <iostream>
#include <string>
using namespace std;

// Criar a estrutura base
struct el{
    string nome;    // campo de dados (para este exemplo)
    int idade;      // campo de dados (para este exemplo)
    el *next;       // pointer para o elemento seguinte
};

// Criar a fila vazia
el *pHead = nullptr; // note que podia ter feito esta instrução na definição da estrutura
el *pTail = nullptr; // note que podia ter feito esta instrução na definição da estrutura

// Função específica para a estrutura deste exemplo
// Pede ao utilizador os dados para um elemento da lista 
void getData( el *elemento ){
    cout << "\nDados da pessoa"
         << "\n---------------\n";
    cout << " Nome: "; cin.ignore(); getline(cin, elemento->nome);
    cout << "Idade: "; cin >> elemento->idade;
    cout << endl;
}


// Função específica para a estrutura deste exemplo
// Escreve os dados de um elemento da lista 
void putData( el *elemento ){
    cout << "Dados da pessoa\n"
         << "---------------\n";
    cout << " Nome: " << elemento->nome << endl;
    cout << "Idade: " << elemento->idade << endl;
}


// insere elemento à cauda
// devolve true se conseguiu
bool qInsTail(){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível inserir

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento no fim da fila
    pNovo->next = nullptr;
    if( !pHead ) // fila vazia
        pHead = pNovo;
    else
        pTail->next = pNovo;
    pTail = pNovo;
    return true;
}


// remove elemento da cabeça
// devolve true se conseguiu
bool qDelHead(){
    el *pDel = pHead;

    if( !pHead ) return false; // lista vazia
    if( pHead==pTail ) pTail = nullptr; // só tem um elemento, fica vazia
    pHead = pHead->next;
    delete pDel;
    return true;
}


// listar fila (início->fim)
// igual ao listar pilha
void list(){
    el *pAux = pHead; // para percorrer a lista

    if( !pHead ){
        cout << "A fila está vazia!\n";
    }
    while(pAux){
        putData( pAux );
        pAux = pAux->next;
    }
}


// listar fila invertida (fim->início)
void qReverseList(){
    el *pListed = nullptr; // último elemento listado
    el *pAux = pTail; // para percorrer a lista

    if( !pHead ){
        cout << "A fila está vazia!\n";
        return;
    }

    do{
        //listar elemento
        putData( pAux );
        pListed = pAux;

        // avançar pAux até ao último elemento não listado
        pAux = pHead;
        while( pAux->next && (pAux->next != pListed) ) pAux = pAux->next;

    }while( pListed != pHead ); // repete enquanto o elemento listado não foi o 1º
}


// programa exemplo para testar as funções
int main(){
    int tot;

    cout << "Total de pessoas a inserir = ";
    cin >> tot;

    // inserir pessoas
    for(int i=0; i<tot; i++) 
        if( !qInsTail() ) break;

    // listar
    cout << "\nListagem da fila\n"
         << "================\n";
    list();

    // remover pessoa da cabeça
    cout << "\nApagar à cabeça...\n"
         << "==================\n";
    if( qDelHead() ){
        cout << "Apaguei.\n";
        list();
    } else
        cout << "Lista vazia\n";

    // listar por ordem inversa
    cout << "\nListagem invertida da fila\n"
         << "==========================\n";
    qReverseList();

    return 0;
}