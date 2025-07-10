// insere elemento na posição indicada (após o elemento apontado por pHere)
// devolve true se conseguiu
// assume-se que pHere aponta para um elemento existente
bool insHere( el *pHere ){
    el *pNovo = new (nothrow) el; // alocação de espaço

    if( !pNovo ) return false; // impossível alocar espaço

    // preencher dados do novo elemento
    getData( pNovo );

    // inserir o elemento após pHere
    pNovo->prev = pHere;
    pNovo->next = pHere->next;
    
    if( pHere->next ) // se não é o último elemento
        pHere->next->prev = pNovo;
    else // se é o último elemento, atualiza pTail
        pTail = pNovo;
        
    pHere->next = pNovo;
    return true;
}


// remove elemento da posição indicada (apontado por pHere)
// devolve true se conseguiu
// assume-se que pHere aponta para um elemento existente
bool delHere( el *pHere ){
    if( !pHere ) return false; // verificação adicional de segurança

    // ajustar os pointers dos elementos vizinhos
    if( pHere->prev ) // se não é o primeiro elemento
        pHere->prev->next = pHere->next;
    else // se é o primeiro elemento, atualiza pHead
        pHead = pHere->next;

    if( pHere->next ) // se não é o último elemento
        pHere->next->prev = pHere->prev;
    else // se é o último elemento, atualiza pTail
        pTail = pHere->prev;

    delete pHere;
    return true;
}


/* Explicação das funções:

insHere(el *pHere):

Aloca espaço para um novo elemento

Pede os dados ao usuário

Insere o novo elemento APÓS o elemento apontado por pHere

Atualiza os pointers next/prev dos elementos vizinhos

Trata os casos especiais quando o novo elemento é inserido no final da lista

delHere(el *pHere):

Remove o elemento apontado por pHere

Atualiza os pointers next/prev dos elementos vizinhos

Trata os casos especiais quando o elemento removido é o primeiro ou o último

Libera a memória do elemento removido

Estas implementações mantêm a consistência da lista duplamente ligada em todos os casos, incluindo quando:

O elemento é inserido/removido no início

O elemento é inserido/removido no final

O elemento é inserido/removido no meio da lista

O código completo com estas funções já deve funcionar corretamente com todas as opções do menu*/
