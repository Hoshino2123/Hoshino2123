/**************************************************************************************
 * Manipulação de uma pilha com base numa lista SIMPLESMENTE ligada
 * 
 * Funções feitas:
 *  insHead()       -> inserir elemento no topo (cabeça) da pilha
 *  delHead()       -> remover o primeiro (cabeça) elemento da pilha
 *  list()          -> listar todos os elementos da pilha, começando pelo topo (cabeça)
 *  reverseList()   -> listar todos os elementos da pilha, começando pelo fundo (cauda)
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

// Criar a lista vazia
el *pHead = nullptr; // note que podia ter feito esta instrução na definição da estrutura

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


// insere elemento à cabeça
// devolve true se conseguiu
bool insHead(){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível inserir

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento no topo da pilha
    pNovo->next = pHead;
    pHead = pNovo;
    return true;
}


// remove elemento da cabeça
// devolve true se conseguiu
bool delHead(){
    el *pDel = pHead;

    if( !pHead ) return false; // lista vazia

    pHead = pHead->next;
    delete pDel;
    return true;
}


// listar pilha (top->bottom)
void list(){
    el *pAux = pHead; // para percorrer a lista

    if( !pHead ){
        cout << "A pilha está vazia!\n";
    }
    while(pAux){
        putData( pAux );
        pAux = pAux->next;
    }
}


// listar pilha invertida (bottom->top)
void reverseList(){
    el *pListed = nullptr; // último elemento listado
    el *pAux; // para percorrer a lista

    if( !pHead ){
        cout << "A pilha está vazia!\n";
        return;
    }

    while( pListed != pHead ){ // enquanto o elemento listado não foi o 1º

        // avançar pAux até ao último elemento não listado
        pAux = pHead;
        while( pAux->next != pListed ) pAux = pAux->next;

        //listar elemento
        putData( pAux );
        pListed = pAux;
    }
}


// programa exemplo para testar as funções
int main(){
    int tot;

    cout << "Total de pessoas a inserir = ";
    cin >> tot;

    // inserir pessoas
    for(int i=0; i<tot; i++) 
        if( !insHead() ) break;

    // listar
    cout << "\nListagem da pilha\n"
         << "=================\n";
    list();

    // remover pessoa da cabeça
    cout << "\nApagar à cabeça...\n"
         << "==================\n";
    if( delHead() ){
        cout << "Apaguei.\n";
        list();
    } else
        cout << "Lista vazia\n";

    // listar por ordem inversa
    cout << "\nListagem invertida da pilha\n"
         << "===========================\n";
    reverseList();

    return 0;
}