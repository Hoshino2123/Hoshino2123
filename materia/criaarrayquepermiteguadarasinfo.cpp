/* crie um array que permita guardar os dados de 100 automóveis.
pretende-se guardar, marca, peso, preço e cor */

#include <iostream>
#include <string>

using namespace std;

struct carro {
    string marca;
    float peso;   
    float preco;  
    string cor;
};

int main() {
    const int NUM_AUTOMOVEIS = 100;
    Automovel frota[NUM_AUTOMOVEIS];
    
   //    dados
    frota[0] = {"Toyota", 1200.5f, 25000.0f, "Vermelho"};
    frota[1] = {"Ford", 1450.2f, 32000.0f, "Azul"};

    cout << "Dados do primeiro carro:" << endl;
    cout << "Marca: " << frota[0].marca << endl;
    cout << "Peso: " << frota[0].peso << " kg" << endl;
    cout << "Preço: " << frota[0].preco << " euros" << endl;
    cout << "Cor: " << frota[0].cor << endl;
    
    return 0;
}