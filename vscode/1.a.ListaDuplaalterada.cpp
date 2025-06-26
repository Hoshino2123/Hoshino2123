/**************************************************************************************
 * Manipulação de uma lista DUPLAMENTE ligada
 * 
 * Todas as funções foram implementadas conforme solicitado
 */

#include <iostream>
#include <limits>
#include <string>
using namespace std;

// Criar a estrutura base
struct el{
    int numAluno;   // campo de dados (para este exemplo)
    string nome;    // campo de dados (para este exemplo)
    el *next;       // pointer para o elemento seguinte
    el *prev;       // pointer para o elemento anterior
};

// Criar a lista vazia
el *pHead = nullptr;
el *pTail = nullptr;


// Função específica para a estrutura deste exemplo
void getData( el *elemento ){
    cout << "\nDados do aluno"
         << "\n--------------\n";
 
    cout << "Número: ";
    cin >> elemento->numAluno;
 
    cout << "  Nome: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, elemento->nome);
 
    cout << endl;
}


// Função específica para a estrutura deste exemplo
void putData( el *elemento ){
    cout << "\nDados do aluno"
         << "\n--------------\n";
    cout << "Número: " << elemento->numAluno << endl;
    cout << "  Nome: " << elemento->nome << endl;
}


// Recebe o nº da posição (começam em 1)
// Percorre a lista até essa posição
el *getPtrToPos( int pos ){
    if(pos < 1) return nullptr;
    
    el *current = pHead;
    int count = 1;
    
    while(current != nullptr && count < pos){
        current = current->next;
        count++;
    }
    
    return current;
}


// insere elemento na 1ª posição da lista
bool insHead(){
    el *novo = new el;
    getData(novo);
    
    novo->next = pHead;
    novo->prev = nullptr;
    
    if(pHead != nullptr){
        pHead->prev = novo;
    } else {
        pTail = novo; // lista estava vazia
    }
    
    pHead = novo;
    return true;
}


// remove primeiro elemento da lista
bool delHead(){
    if(pHead == nullptr) return false;
    
    el *temp = pHead;
    pHead = pHead->next;
    
    if(pHead != nullptr){
        pHead->prev = nullptr;
    } else {
        pTail = nullptr; // lista ficou vazia
    }
    
    delete temp;
    return true;
}


// insere elemento no fim da lista
bool insTail(){
    el *novo = new el;
    getData(novo);
    
    novo->next = nullptr;
    novo->prev = pTail;
    
    if(pTail != nullptr){
        pTail->next = novo;
    } else {
        pHead = novo; // lista estava vazia
    }
    
    pTail = novo;
    return true;
}


// remove último elemento da lista
bool delTail(){
    if(pTail == nullptr) return false;
    
    el *temp = pTail;
    pTail = pTail->prev;
    
    if(pTail != nullptr){
        pTail->next = nullptr;
    } else {
        pHead = nullptr; // lista ficou vazia
    }
    
    delete temp;
    return true;
}


// insere elemento na posição indicada
bool insHere( el *pHere){
    if(pHere == nullptr) return false;
    
    if(pHere == pHead) return insHead();
    
    el *novo = new el;
    getData(novo);
    
    novo->next = pHere;
    novo->prev = pHere->prev;
    pHere->prev->next = novo;
    pHere->prev = novo;
    
    return true;
}


// remove elemento da posição indicada
bool delHere( el *pHere){
    if(pHere == nullptr) return false;
    
    if(pHere == pHead) return delHead();
    if(pHere == pTail) return delTail();
    
    pHere->prev->next = pHere->next;
    pHere->next->prev = pHere->prev;
    
    delete pHere;
    return true;
}


// listar (início->fim)
void list(){
    el *current = pHead;
    int count = 1;
    
    while(current != nullptr){
        cout << "Posição " << count++ << ":";
        putData(current);
        current = current->next;
    }
    
    if(count == 1){
        cout << "Lista vazia!\n";
    }
}


// listar por ordem inversa (fim->início)
void revList(){
    el *current = pTail;
    int count = 1;
    
    while(current != nullptr){
        cout << "Posição " << count++ << " (fim para início):";
        putData(current);
        current = current->prev;
    }
    
    if(count == 1){
        cout << "Lista vazia!\n";
    }
}


// programa exemplo para testar as funções
int main(){
    char op;        // função a executar
    bool stop=false;// se não conseguir inserir, termina
    size_t pos;     // nº da posição
    el *pPos;       // pointer para o elemento na posição

    do{
        // Mostra menu
        cout << "+------------------------+\n"
             << "| i - inserir no início  |\n"
             << "| I - inserir no fim     |\n"
             << "| a - apagar o primeiro  |\n"
             << "| A - apagar o último    |\n"
             << "| p - inserir na posição |\n"
             << "| r - remover a posição  |\n"
             << "| l - listar             |\n"
             << "| L - listar inverso     |\n"
             << "| t - terminar           |\n"
             << "+------------------------+\n"
             << "       Opção: ";
        cin >> op;
        cout << endl;

        switch( op ){
            case 'i':{
                stop = !insHead();
                break;
            }
            case 'I':{
                stop = !insTail();
                break;
            }
            case 'a':{
                delHead();
                break;
            }
            case 'A':{
                delTail();
                break;
            }
            case 'p':{
                cout << "Posição: "; cin >> pos;
                pPos = getPtrToPos( pos );
                if( pPos )
                    stop = !insHere( pPos );
                else
                    cout << " *** posição inválida ***"; 
                break;
            }
            case 'r':{
                cout << "Posição: "; cin >> pos;
                pPos = getPtrToPos( pos );
                if( pPos )
                    delHere( pPos );
                else
                    cout << " *** posição inválida ***"; 
                break;
            }
            case 'l':{
                cout << "Listagem de alunos\n"
                     << "==================\n";
                list();
                break;
            }
            case 'L':{
                cout << "Listagem de alunos por ordem inversa\n"
                     << "====================================\n";
                revList();
                break;
            }
            case 't':{
                break;
            }
            default:{
                cout << " **** opção inválida ****";
            }
        }
        cout << endl << endl;
    } while( op!='t' && !stop );

    return 0;
}
/*Explicação das implementações:
getPtrToPos(int pos):

Percorre a lista desde o início até à posição solicitada

Retorna nullptr se a posição for inválida (menor que 1 ou maior que o tamanho da lista)

insHead():

Cria um novo elemento e pede os dados

Insere no início da lista, atualizando os ponteiros prev/next

Atualiza pHead e, se necessário, pTail (caso a lista estivesse vazia)

delHead():

Remove o primeiro elemento, atualizando pHead

Se a lista ficar vazia, atualiza pTail também

insTail():

Similar a insHead(), mas insere no final da lista

Atualiza pTail e, se necessário, pHead (caso a lista estivesse vazia)

delTail():

Similar a delHead(), mas remove o último elemento

Atualiza pTail e, se a lista ficar vazia, atualiza pHead

insHere(el *pHere):

Insere um novo elemento antes do elemento apontado por pHere

Casos especiais: se pHere é o primeiro elemento, chama insHead()

delHere(el *pHere):

Remove o elemento apontado por pHere

Casos especiais: se pHere é o primeiro ou último, chama delHead() ou delTail()

list() e revList():

Percorrem a lista do início para o fim ou vice-versa

Mostram os dados de cada elemento usando putData()

Todas as funções mantêm a integridade da lista duplamente ligada, atualizando corretamente os ponteiros prev e next de cada elemento, bem como os ponteiros globais pHead e pTail.

*/