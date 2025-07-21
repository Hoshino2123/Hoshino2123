
// Exemplo de uso
int main() {
    ListaBidirecional<std::string> nomes;
    
    // Testando os métodos
    nomes.push_back("Jorge");
    nomes.push_back("Ana");
    
    std::cout << "Nomes iniciais: ";
    nomes.exibir();
    
    nomes.push_front("Teresa");
    std::cout << "Com Teresa no início: ";
    nomes.exibir();
    
    // Inserindo múltiplos elementos no início
    nomes.insert(nomes.begin(), "Melga");
    nomes.insert(nomes.begin(), "Melga");
    std::cout << "Com duas Melgas no início: ";
    nomes.exibir();
    
    // Inserindo no meio (4ª posição)
    auto it = nomes.begin();
    ++it; ++it; ++it; // Avança 3 vezes para chegar à 4ª posição
    nomes.insert(it, "Golpista");
    std::cout << "Com Golpista na 4ª posição: ";
    nomes.exibir();
    
    // Removendo um elemento
    it = nomes.begin();
    ++it; ++it; // 3ª posição
    nomes.erase(it);
    std::cout << "Removido 3º elemento: ";
    nomes.exibir();
    
    // Testando iterador reverso
    std::cout << "Lista em ordem reversa: ";
    for (auto rit = nomes.rbegin(); rit != nomes.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
/* Explicação da Implementação:
Estrutura de Nó: Cada nó contém:

dado: o valor armazenado

anterior: ponteiro para o nó anterior

proximo: ponteiro para o próximo nó

Principais Métodos:

push_front(): Insere no início, atualizando os ponteiros

push_back(): Insere no final, atualizando os ponteiros

pop_front()/pop_back(): Remove do início/fim, cuidando dos ponteiros

insert(): Insere antes de uma posição específica

erase(): Remove um elemento em uma posição específica

Iteradores:

Implementei tanto iteradores normais quanto reversos

Os iteradores permitem percorrer a lista em ambas as direções

Suportam operadores ++, --, *, ==, !=

Gerir Memória:

O destrutor chama limpar() para liberar toda a memória

Cada operação de inserção/remoção cuida da alocação/liberação de memória

Esta implementação fornece todas as funcionalidades básicas de uma lista duplamente ligada similar à std::list da STL.

New*/