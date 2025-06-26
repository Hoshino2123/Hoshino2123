/********************************************************************************************
 * Lista unidirecional (simplesmente ligada)
 * 
 * Funções e métodos abordados:
 *   .front()        -> aceder (leitura/escrita) ao 1º elemento
 *   .push_front()   -> insere elemento no início da lista
 *   .pop_front()    -> remove primeiro elemento da lista
 *   .insert_after() -> insere elemento(s) após o indicado pelo iterador (QUE TEM DE SER VÁLIDO)
 *   .erase_after()  -> remove elemento(s) após o indicado pelo iterador (QUE TEM DE SER VÁLIDO)
 *   .empty()        -> devolve true se a lista estiver vazia
 * 
 * Iteradores:
 *   .before_begin() -> devolve um iterador para antes do 1º elemento
 *   .begin()        -> devolve um iterador para o 1º elemento
 *   .end()          -> devolve um iterador para depois do último elemento
 *   ATENÇÃO que não tem reverse iterators
 * 
 * Acesso a um elemento específico:
 *   Note que não existe o conceito de índice.
 *   Pode-se usar um iterador ("it", por exemplo) como se fosse um pointer e
 *   aceder (leitura/escrita) usando "*it", tal como se fazia nos contentores <vector> e <array>
*/

#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    forward_list<string> nomes = {"Jorge", "Ana"};

    // listar
    cout << "\nNomes\n-----\n"; // Jorge Ana
    for(auto el : nomes) cout << el << endl;

    // inserir no início da lista
    nomes.push_front("Teresa");

    // listar
    cout << "\nNomes com a Teresa" // Teresa Jorge Ana
         << "\n------------------\n";
    for(auto el : nomes) cout << el << endl;

    // Aceder ao 1 elemento
    cout << "\nO primeiro nome é : "
         << nomes.front() << endl;

    // inserir 2 "Melgas" a seguir à "Teresa" (na 2ª posição da lista)
    nomes.insert_after(nomes.begin(), 2, "Melga");

    // listar
    cout << "\nNomes com as Melgas" // Teresa Melga Melga Jorge Ana
         << "\n-------------------\n";
    for(auto el : nomes) cout << el << endl; 

    // Note que não pode "somar" valores ao iterador, porque a estrutura subjacente
    // não é do tipo array (elementos seguidos em memória).
    // No entanto, pode incrementar o iterador.
    // Tem de percorrer a lista com um iterador.

    // inserir 1 "Golpista" no meio da lista (na 4ª posição)

    // começar por definir um iterador para o início da lista
    forward_list<string>::iterator it = nomes.before_begin(); // atenção ao before_begin()
    // note que também podia ter escrito
    //auto it = nomes.before_begin();

    // avançar até ao 4º elemento (o iterador fica a apontar para o 3º)
    for(size_t i=1; i<4; i++) it++; // note a necessidade de começar em 1

    nomes.insert_after( it, "Golpista" );

    // se pretendesse eliminar o 4º elemento, escreveria
    // nomes.erase_after( it );
    // porque it aponta para o 3º elemento

    // listar
    cout << "\nNomes com o Golpista" // Teresa Melga Melga Golpista Jorge Ana
         << "\n--------------------\n";
    for(auto el : nomes) cout << el << endl;

    // remover no início da lista
    nomes.pop_front();

    // listar
    cout << "\nNomes sem a Teresa" // Melga Melga Golpista Jorge Ana
         << "\n------------------\n";
    for(auto el : nomes) cout << el << endl;

    return 0;
}