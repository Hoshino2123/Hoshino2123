/**************************************************************************************
 * Manipulação de uma lista DUPLAMENTE ligada
 * 
 * Funções feitas:
 *  getData()       -> função específica para input de dados neste exemplo
 *                     (esta função irá mudar de acordo com a estrutura em questão)
 *  putData()       -> função específica para output de dados deste exemplo
 *                     (esta função irá mudar de acordo com a estrutura em questão)
 *  insHead()       -> inserir elemento no início (cabeça) da lista
 *  delHead()       -> remover o primeiro elemento (cabeça) da lista
 *  insTail()       -> inserir elemento no fim (cauda) da lista
 *  delTail()       -> remover o último elemento (cauda) da lista
 *  list()          -> listar todos os elementos, começando pelo primeiro (cabeça)
 *  revList()       -> listar todos os elementos, começando pelo último (cauda)
 *  getPtrToPos()   -> recebe um nº de posição e devolve um pointer para o elemento (ou nullptr)
 * 
 * Funções por fazer:
 *  insHere()       -> inserir um elemento na posição indicada pelo parâmetro da função
 *  delHere()       -> remover o elemento na posição indicada pelo parâmetro da função
 * 
 * NOTA: As funções insXXX() e delXXX() devem devolver true se conseguiram inserir/remover
 * 
 * NOTA: Se precisar de usar o getline() após ter usado um cin, deve
 *       limpar o '\n' do buffer de entrada escrevendo a instrução
 *       cin.ignore(numeric_limits<streamsize>::max(), '\n');
 *       antes do getline()
 *       Para isso, no início precisa de #include <limits>
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
el *pHead = nullptr; // note que podia ter feito esta instrução na definição da estrutura
el *pTail = nullptr; // note que podia ter feito esta instrução na definição da estrutura


// Função específica para a estrutura deste exemplo
// Pede ao utilizador os dados para um elemento da lista 
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
// Escreve os dados de um elemento da lista 
void putData( el *elemento ){
    cout << "\nDados do aluno"
         << "\n--------------\n";
    cout << "Número: " << elemento->numAluno << endl;
    cout << "  Nome: " << elemento->nome << endl;
}


// Recebe o nº da posição (começam em 1)
// Percorre a lista até essa posição
// Se o elemento existe, devolve um pointer para ele
// ou nullptr caso contrário
el *getPtrToPos( size_t pos ){
    el *pAux = pHead;

    // lista tem de ter elementos e o menor valor possível é pos=1
    if( !pHead || pos==0 ) return nullptr;

    for(size_t i=1; i<pos; i++){
        pAux = pAux->next;
        if( !pAux ) return nullptr; // pos demasiado grande
    }
    
    return pAux;
}


// insere elemento na 1ª posição da lista
// devolve true se conseguiu
bool insHead(){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível alocar espaço

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento no início da lista
    pNovo->next = pHead;
    pNovo->prev = nullptr;
    if( !pHead ) pTail = pNovo;
    else pHead->prev = pNovo;
    pHead = pNovo;
    return true;
}


// remove elemento da 1ª posição da lista
// devolve true se conseguiu
bool delHead(){
    el *pDel = pHead;

    if( !pHead ) return false; // lista vazia

    // se só há 1 elemento
    if( !pHead->next ) pTail = nullptr; //fica vazia
    else pHead->next->prev = nullptr;

    pHead = pHead->next;
    delete pDel;
    return true;
}


// insere elemento no fim da lista
// devolve true se conseguiu
bool insTail(){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível alocar espaço

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento no fim da lista
    pNovo->next = nullptr;
    pNovo->prev = pTail;
    if( !pHead ) pHead = pNovo;
    else pTail->next = pNovo;
    pTail = pNovo;
    return true;
}


// remove último elemento da lista
// devolve true se conseguiu
bool delTail(){
    el *pDel = pTail;

    if( !pHead ) return false; // lista vazia

    // se só há 1 elemento
    if( !pHead->next ) pHead = nullptr; //fica vazia
    else pTail->prev->next = nullptr;

    pTail = pTail->prev;
    delete pDel;
    return true;
}


// insere elemento na posição indicada
// devolve true se conseguiu
// assume-se que pHere aponta para um elemento existente
bool insHere( el *pHere){
    return true;
}


// remove elemento da posição indicada
// devolve true se conseguiu
// assume-se que pHere aponta para um elemento existente
bool delHere( el *pHere){
    return true;
}


// listar (início->fim)
void list(){
    el *pAux = pHead; // para percorrer a lista

    if( !pHead ){
        cout << "A lista está vazia!\n";
    }
    while(pAux){
        putData( pAux );
        pAux = pAux->next;
    }
}


// listar por ordem inversa (fim->início)
void revList(){
    el *pAux = pTail; // para percorrer a lista

    if( !pHead ){
        cout << "A lista está vazia!\n";
    }
    while(pAux){
        putData( pAux );
        pAux = pAux->prev;
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
             << "| P - apagar a posição   |\n"
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
            case 'P':{
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