#include <iostream>
using namespace std;

// Estrutura para armazenar os dados (adaptar conforme necessidade)
struct Data {
    int value;  // Exemplo: pode ser alterado para o tipo de dados necessário
};

// Estrutura do nó da lista ligada
struct Node {
    Data data;
    Node* next;
};
// Função para obter dados do usuário
Data getData() {
    Data newData;
    cout << "Digite um valor inteiro: ";
    cin >> newData.value;
    return newData;
}

// Função para exibir dados
void putData(Data data) {
    cout << "Valor: " << data.value << endl;
}
// Inserir elemento no topo da pilha (cabeça)
Node* insHead(Node* head, Data data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

// Listar todos os elementos da pilha (do topo para a base)
void list(Node* head) {
    if (head == nullptr) {
        cout << "Pilha vazia!" << endl;
        return;
    }
    
    cout << "Elementos da pilha (do topo para a base):" << endl;
    Node* current = head;
    while (current != nullptr) {
        putData(current->data);
        current = current->next;
    }
}

// Remover o elemento do topo da pilha
Node* delHead(Node* head) {
    if (head == nullptr) {
        cout << "Pilha vazia! Nada a remover." << endl;
        return nullptr;
    }
    
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Elemento do topo removido." << endl;
    return head;
}

// Listar elementos da pilha da base para o topo (usando recursão)
void reverseList(Node* head) {
    if (head == nullptr) {
        return;
    }
    reverseList(head->next);
    putData(head->data);
}
int main() {
    Node* stack = nullptr;  // Inicializa pilha vazia
    int choice;
    
    do {
        cout << "\nMenu de Operacoes:\n";
        cout << "1. Inserir elemento no topo\n";
        cout << "2. Remover elemento do topo\n";
        cout << "3. Listar elementos (topo->base)\n";
        cout << "4. Listar elementos (base->topo)\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                stack = insHead(stack, getData());
                break;
            case 2:
                stack = delHead(stack);
                break;
            case 3:
                list(stack);
                break;
            case 4:
                if (stack == nullptr) {
                    cout << "Pilha vazia!" << endl;
                } else {
                    cout << "Elementos da pilha (da base para o topo):" << endl;
                    reverseList(stack);
                }
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }
    } while (choice != 0);
    
    // Liberar memória antes de sair
    while (stack != nullptr) {
        stack = delHead(stack);
    }
    
    return 0;
}