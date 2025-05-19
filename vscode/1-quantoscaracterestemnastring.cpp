#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1- Criar uma variável do tipo string para uma frase
    string frase;
    
    // 2- Pedir a frase ao utilizador
    cout << "escreva uma frase: ";
    getline(cin, frase); // Usamos getline para ler espaços
    
    // 3- Dizer quantos caracteres tem
    // O método length() retorna o número de caracteres
    cout << "A frase tem " << frase.length() << " caracteres." << endl;
    
    return 0;
}