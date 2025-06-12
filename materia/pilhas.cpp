/* listas simplesmente ligadas: fila
1- inserir no final*/

#include <iostream>

using namespace std;


bool instail() {
    el *pNovo = new(nothrow) el;
    if(!pNovo) return false;
    //verificar se 1 tá vazia
    //if (!pHeead -> next)
    //lista so com 1 el
    /*phead=nullptr;
    ptail=nullptr;
    delete pdel;
    return ture;
} else {
 //lista com vários elementos
 phead = phead-pnext;
 }
 Delete pdel;
 return trrue;
}*/
    getdata(pNovo);
    pNovo -> next = nullptr;
    if (!pHead)
    {
        //  lista vazia
        pHead =pNovo;
    else
        // lista com 1 ou + elementos
        pTail ->  next =pNovo
       pTail=pNovo;
    }
    
}