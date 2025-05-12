#include <iostream>
#include <limits>   // Para limpar o buffer de entrada

using namespace std;

constexpr size_t maxCol = 10;  // Tamanho do campo (1D para simplificar)
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
    cout << "Campo atual (posições 1 a " << maxCol << "):" << endl;
    
    // Mostra números das posições
    for(size_t i = 0; i < maxCol; i++) {
        cout << i+1 << ' ';
    }
    cout << endl; 
    // Mostra o estado de cada posição
    for(auto el : campo) {
        if(el == true) {
            cout << 'x';
        } else {
            cout << 'o';
        }
        cout << ' ';  // Espaço entre os caracteres
    }
    cout << endl;
}

// Função para plantar minas nas posições escolhidas pelo usuário
void PlantaMinas() {
    int total;
    
    // Pede o número de minas a serem plantadas
    cout << "Quantas quer deseja plantar (0-" << maxCol << ")? ";
    cin >> total;
    
    // Valida a entrada
    while(cin.fail() || total < 0 || total > static_cast<int>(maxCol)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Valor inválido. Digite um número entre 0 e " << maxCol << ": ";
        cin >> total;
    }
    
    if(total == 0) {
        cout << "Nenhuma mina plantada.\n";
        return;
    }
    
    cout << "Digite as posições onde quer plantar as minas (1-" << maxCol << "): " << endl;
    
    for(int i = 0; i < total; i++) {
        int posicao;
        bool posicaoValida = false;
        
        while(!posicaoValida) {
            cout << "Mina " << i+1 << "/" << total << ": ";
            cin >> posicao;
            
            // Verifica se a entrada é válida
            if(cin.fail() || posicao < 1 || posicao > static_cast<int>(maxCol)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Posição inválida. Digite um número entre 1 e " << maxCol << ": ";
                continue;
            }
            
            // Verifica se já tem mina nesta posição
            if(campo[posicao-1] == true) {
                cout << "Já existe uma mina nesta posição. Escolha outra: ";
                continue;
            }
            
            posicaoValida = true;
        }
        
        // Planta a mina (subtrai 1 porque o array começa em 0)
        campo[posicao-1] = true;
    }
    
    cout << total << " minas plantadas com sucesso!" <<endl;
}

// Função principal
int main() {
    cout << "MINESWEEPER SIMPLIFICADO (1D)" << endl;
    cout << "Campo com " << maxCol << " posições (1 a " << maxCol << ")." << endl;
    
    // Inicializa o campo limpo
    LimpaMinas();
    
    char opcao;
    do {
        cout << endl << "Menu:" << endl;
        cout << "1 - Limpar campo (remove todas as minas)" << endl;
        cout << "2 - Plantar minas" << endl;  
        cout << "3 - Mostrar campo" << endl;
        cout << "0 - Sair " << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        
        switch(opcao) {
            case '1':
                LimpaMinas();
                cout << "Campo limpo! Todas as minas foram removidas." <<endl;
                break;
            case '2':
                PlantaMinas();
                break;
            case '3':
                ListaMinas();
                break;
            case '0':
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl ;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while(opcao != '0');
    
    return 0;
}