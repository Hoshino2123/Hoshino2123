/********************************************************************************************
 * Lista bidirecional (duplamente ligada)
 * 
 * Funções e métodos abordados:
 *   front()        -> aceder (leitura/escrita) ao 1º elemento
 *   back()         -> aceder (leitura/escrita) ao último elemento
 *   push_front()   -> insere elemento no início da lista
 *   push back()    -> insere elemento no fim da lista
 *   pop_front()    -> remove primeiro elemento da lista
 *   pop_back()     -> remove último elemento da lista
 *   insert()       -> insere elemento(s) antes do indicado pelo iterador (QUE TEM DE SER VÁLIDO)
 *   erase()        -> remove elemento(s) indicado pelo iterador (QUE TEM DE SER VÁLIDO)
 *   empty()        -> devolve true se a lista estiver vazia
 * 
 * Iteradores:
 *   Tem reverse iterators, porque é duplamente ligada
 * 
 * Acesso a um elemento específico:
 *   Note que não existe o conceito de índice.
 *   Pode-se usar um iterador ("it", por exemplo) como se fosse um pointer e
 *   aceder (leitura/escrita) usando "*it", tal como se fazia nos contentores <vector> e <array>
*/

#include <iostream>
#include <list>
using namespace std;

int main(){
    list<string> nomes = {"Jorge", "Ana"};

    // listar
    cout << "\nNomes\n-----\n";
    for(auto el : nomes) cout << el << endl;

    // acrescentar no início da lista
    nomes.push_front("Teresa");

    // listar
    cout << "\nNomes com a Teresa"
         << "\n------------------\n";
    for(auto el : nomes) cout << el << endl;

    // inserir 2 Melgas no início da lista)
    nomes.insert(nomes.begin(), 2, "Melga");

    // listar
    cout << "\nNomes com as Melgas"
         << "\n-------------------\n";
    for(auto el : nomes) cout << el << endl;

    // Note que não pode "somar" valores ao iterador, porque a estrutura subjacente
    // não é do tipo array (elementos seguidos em memória).
    // Tem de percorrer a lista com um iterador.

    // inserir 1 Golpista no meio da lista (na 4ª posição)
    list<string>::iterator it = nomes.begin();
    for(size_t i=1; i<4; i++) it++; // note a necessidade de começar em 1
    nomes.insert( it, "Golpista" );

    // se pretendesse eliminar o 4ª escreveria
    // nomes.erase( it );

    // listar
    cout << "\nNomes com o Golpista"
         << "\n--------------------\n";
    for(auto el : nomes) cout << el << endl;

    return 0;
}