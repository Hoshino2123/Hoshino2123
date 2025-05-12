#include <iostream>
#include <cstdlib>  // Para rand() e srand()
#include <ctime>    // Para time()
#include <limits>   // Para limpar o buffer de entrada

using namespace std;

constexpr size_t maxCol = 5;  // Tamanho do campo (1D para simplificar)
bool campo[maxCol];           // Array para representar o campo de minas

// Função para limpar todas as minas do campo
void LimpaMinas() {
    // Percorre todo o array definindo cada posição como false (sem mina)
    for(auto &el : campo) {
        el = false;
    }
}

// Função para mostrar o campo atual
void ListaMinas() {
    cout << "Campo atual:";
    // Percorre cada posição do campo
    for(auto el : campo) {
        // Se houver mina, mostra 'x', senão mostra 'o'
        if(el == true) {
            cout << 'x';
        } else {
            cout << 'o';
        }
        cout << ' ';  // Espaço entre os caracteres para melhor visualização
    }
    cout << "endl";
}

// Função para plantar minas no campo
void PlantaMinas() {
    int total;
    
    // Pede o número de minas a serem plantadas
    cout << "Quantas minas deseja plantar (0-" << maxCol << ")? ";
    cin >> total;
    
    // Valida a entrada
    while(cin.fail() || total < 0 || total > static_cast<int>(maxCol)) {
        cin.clear();  // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Descarta entrada inválida
        cout << "Valor inválido. Escreve um número entre 0 e " << maxCol << ": ";
        cin >> total;
    }
    
    // Se o usuário escolheu 0 minas, simplesmente retorna
    if(total == 0) {
        cout << "Nenhuma mina plantada.";
        return;
    }
    
    // Inicializa o gerador de números aleatórios
    srand(time(nullptr));
    
    cout << "Plantando " << total << " minas em posições aleatórias...\n";
    
    int minasPlantadas = 0;
    while(minasPlantadas < total) {
        // Gera uma posição aleatória
        size_t pos = rand() % maxCol;
        
        // Se a posição já tem mina, tenta outra
        if(campo[pos] == true) {
            continue;
        }
        
        // Planta a mina
        campo[pos] = true;
        minasPlantadas++;
    }
}

// Função principal
int main() {
    cout << "MINESWEEPER SIMPLIFICADO (1D)";
    cout << "Campo com " << maxCol << " posições.";
    
    char opcao;
    do {
        cout << "Menu:";
        cout << "1 - Limpar campo";
        cout << "2 - Plantar minas";
        cout << "3 - Mostrar campo";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        
        switch(opcao) {
            case '1':
                LimpaMinas();
                cout << "Campo limpo!";
                break;
            case '2':
                PlantaMinas();
                break;
            case '3':
                ListaMinas();
                break;
            case '0':
                cout << "Saindo...";
                break;
            default:
                cout << "Opção inválida!";
        }
    } while(opcao != '0');
    
    return 0;
}
// Estrutura do Programa: Usamos um array unidimensional campo de booleanos para representar as minas. true indica que há uma mina naquela posição, false indica que está seguro.

// Função LimpaMinas(): Percorre todo o array definindo cada posição como false (sem mina).

// Usa um range-based for loop para simplificar o código.

// Função ListaMinas():

//Mostra o estado atual do campo. 'x' representa posições com minas, 'o' representa posições seguras.

// Adicionei espaços entre os caracteres para melhor visualização.

// Função PlantaMinas(): Pede ao usuário quantas minas deseja plantar.
//Valida a entrada para garantir que é um número entre 0 e o tamanho do campo.
//Usa um gerador de números aleatórios para distribuir as minas.
//Garante que não planta minas em posições já ocupadas.

//Função main(): Implementa um menu simples com loop para interação com o usuário.
// Permite limpar o campo, plantar minas e visualizar o campo atual.