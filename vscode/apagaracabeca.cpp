/* bool delhead() { //apaga o 1º elemento da lista
    el* pdel = phead; // Assume que 'el' é o tipo do nó e phead é a variável global da cabeça da lista
    if(!phead) {
        return false; // Lista vazia, não há o que remover
    }
    
    phead = phead->next; // Avança a cabeça para o próximo elemento
    
    if(!phead) {
        ptail = nullptr; // Se a lista ficou vazia, atualiza a cauda também
    } else {
        phead->prev = nullptr; // Remove o vínculo com o nó removido
    }
    
    delete pdel; // Libera a memória do nó removido
    return true; // Remo    ção bem-sucedida
}
*/

/* bool deltail (){} //apaga o último elemento da lista
el* pdel = ptail; // Assume que 'el' é o tipo do nó e phead é a variável global da cabeça da lista
    if(!ptail) {
        return false; // Lista vazia, não há o que remover
    }
    
    ptail = ptail->prev; // Avança a cabeça para o próximo elemento
    
    if(!ptail) {
        phead = nullptr; // Se a lista ficou vazia, atualiza a cauda também
    } else {
        phead->next= nullptr; // Remove o vínculo com o nó removido
    }
    
    delete pdel; // Libera a memória do nó removido
    return true; // Remoção bem-sucedida
}
*/ 

/* void reverseList() {
    el* current = phead; // Começa pela cabeça
    el* temp = nullptr;   // Auxiliar para troca
    
    // Percorre a lista trocando os ponteiros
    while (current != nullptr) {
        temp = current->prev;          // Guarda o anterior
        current->prev = current->next;  // Inverte prev e next
        current->next = temp;           // Atualiza next para o antigo prev
        current = current->prev;        // Avança para o próximo (antigo next)
    }
    
    // Atualiza phead e ptail
    if (temp != nullptr) {
        ptail = phead;       // A cauda agora é a antiga cabeça
        phead = temp->prev;  // A cabeça agora é o último nó processado
    }
}

1) mostrar a altura da pessoa c
2) mostrar o nome da pessoa a

stuct pes{
string nome;
int altura;
pes *next
pes*prev;
}
1- cout <<phead ->  next -> altura;
2- cout << phead -> prev -> nome

void list() {
el *paux=phead;
if(!paux) return;
while (paux) {
putdata(paux);
paux=paux ->next
   }
}
*/

/*
Fazer uma função que devolva true quando encontra, fase se n encontra a função procura o nome da pessoa que recebe como parâmetro

bool procura (string nome) {
    // Começa pelo início da lista
    el* atual = phead;
    
    // Percorre a lista
    while (atual != nullptr) {
        // Se encontrar o nome, retorna true
        if (atual->nome == nome) {
            return true;
        }
        // Vai para o próximo elemento
        atual = atual->next;
    }
    
    // Se chegou ao final sem encontrar, retorna false
    return false;
}
*/


struct el{
string nome;
int idade;
el*next;
el*prev;
} phead=nullptr,ptail=nullptr

/*Explicação:
A função recebe um parâmetro string nome que é o nome a ser procurado.

Inicializa um ponteiro atual apontando para o início da lista (phead).

Percorre a lista enquanto atual não for nulo:

Compara o nome do elemento atual com o nome procurado

Se for igual, retorna true imediatamente

Caso contrário, avança para o próximo elemento

Se o loop terminar sem encontrar, retorna false*/