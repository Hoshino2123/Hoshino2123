/**************************************************************************************
 * Manipulação de uma pilha com base numa lista SIMPLESMENTE ligada
 *
 * Funções implementadas:
 *  insHead()        -> inserir elemento no topo (cabeça) da pilha
 *  list()           -> listar todos os elementos da pilha, começando pelo topo (cabeça)
 *  delHead()        -> remover o primeiro (cabeça) elemento da pilha
 *  reverseList()    -> listar todos os elementos da pilha, começando pelo fundo (cauda)
 *
 *  getData()        -> função específica para input de dados neste exemplo
 *  putData()        -> função específica para output de dados deste exemplo
 */
#include <iostream>
#include <string>
using namespace std;

// Estrutura de cada elemento da pilha
struct el {
    string nome;    // Armazena o nome da pessoa
    int idade;      // Armazena a idade da pessoa
    el *next;       // Ponteiro para o próximo elemento na pilha
};

// Ponteiro para o topo da pilha (inicialmente vazia)
el *pHead = nullptr;

/**************************************************************************************
 * Função: getData
 * Descrição: Pede ao utilizador os dados para preencher um elemento da pilha
 * Parâmetros:
 *   - elemento: ponteiro para o elemento que será preenchido
 **************************************************************************************/
void getData(el *elemento) {
    cout << "\nDados da pessoa"
         << "\n---------------\n";
    cout << " Nome: "; 
    cin.ignore(); 
    getline(cin, elemento->nome);
    cout << "Idade: "; 
    cin >> elemento->idade;
    cout << endl;
}

/**************************************************************************************
 * Função: putData
 * Descrição: Mostra os dados de um elemento da pilha
 * Parâmetros:
 *   - elemento: ponteiro para o elemento cujos dados serão mostrados
 **************************************************************************************/
void putData(el *elemento) {
    cout << "\nDados da pessoa"
         << "\n---------------\n";
    cout << " Nome: " << elemento->nome << endl;
    cout << "Idade: " << elemento->idade << endl << endl;
}

/**************************************************************************************
 * Função: insHead
 * Descrição: Insere um novo elemento no topo da pilha (LIFO - Last In First Out)
 **************************************************************************************/
void insHead() {
    // 1. Criar novo elemento
    el *novo = new el;
    
    // 2. Preencher dados do novo elemento
    getData(novo);
    
    // 3. O próximo do novo elemento aponta para o antigo topo
    novo->next = pHead;
    
    // 4. Atualizar o topo da pilha para o novo elemento
    pHead = novo;
}

/**************************************************************************************
 * Função: list
 * Descrição: Lista todos os elementos da pilha do topo para o fundo
 **************************************************************************************/
void list() {
    el *aux = pHead;  // Começa pelo topo
    
    // Percorre toda a pilha
    while(aux != nullptr) {
        putData(aux);     // Mostra os dados do elemento atual
        aux = aux->next;  // Avança para o próximo elemento
    }
}

/**************************************************************************************
 * Função: delHead
 * Descrição: Remove o elemento do topo da pilha
 **************************************************************************************/
void delHead() {
    // Verifica se a pilha está vazia
    if(pHead == nullptr) {
        cout << "Pilha vazia!\n";
        return;
    }
    
    // 1. Guarda o endereço do elemento a remover
    el *aux = pHead;
    
    // 2. Atualiza o topo para o próximo elemento
    pHead = pHead->next;
    
    // 3. Libera a memória do elemento removido
    delete aux;
}

/**************************************************************************************
 * Função: reverseList
 * Descrição: Lista todos os elementos da pilha do fundo para o topo (ordem inversa)
 * Implementação:
 *   Usa recursão para chegar até o último elemento e depois imprime na volta da recursão,
 *   o que resulta na impressão em ordem inversa.
 *   Durante o processo, modifica temporariamente pHead para avançar na lista, mas
 *   restaura seu valor original antes de retornar.
 **************************************************************************************/
void reverseList() {
    // Caso base: se a pilha estiver vazia
    if(pHead == nullptr) {
        cout << "Pilha vazia!\n";
        return;
    }
    
    // Ponteiro para o elemento atual (topo da pilha)
    el *current = pHead;
    
    // Se houver próximo elemento, faz chamada recursiva
    if(current->next != nullptr) {
        // Guarda o elemento atual temporariamente
        el *temp = current;
        
        // Avança para o próximo elemento (modifica temporariamente pHead)
        current = current->next;
        pHead = current;
        
        // Chamada recursiva para processar o resto da pilha
        reverseList();
        
        // Restaura pHead ao seu valor original
        pHead = temp;
    }
    
    // Imprime o elemento atual (na volta da recursão)
    putData(current);
}

/**************************************************************************************
 * Função: main
 * Descrição: Menu principal para testar as operações da pilha
 **************************************************************************************/
int main() {
    int op;
    do {
        cout << "\nMenu de opcoes\n"
             << "--------------\n"
             << "1. Inserir pessoa\n"
             << "2. Remover pessoa\n"
             << "3. Listar pessoas (topo->fundo)\n"
             << "4. Listar pessoas (fundo->topo)\n"
             << "0. Sair\n"
             << "\nOpcao: ";
        cin >> op;
        
        switch(op) {
            case 1: insHead(); break;
            case 2: delHead(); break;
            case 3: list(); break;
            case 4: reverseList(); break;  // Chamada da função para listar em ordem inversa
            case 0: cout << "Adeus!\n"; break;
            default: cout << "Opcao invalida!\n";
        }
    } while(op != 0);
    
    // Libera toda a memória alocada para a pilha antes de terminar
    while(pHead != nullptr) {
        delHead();
    }
    
    return 0;
}