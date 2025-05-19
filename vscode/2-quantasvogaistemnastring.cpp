#include <iostream>
#include <string>
#include <cctype> // Para usar a função tolower()

using namespace std;

int main() {
    // 1- Criar uma variável do tipo string para uma frase
    string frase;
    int contador_vogais = 0; // Variável para contar as vogais

    // 2- Pedir a frase ao utilizador
    cout << "Digite uma frase: ";
    getline(cin, frase); // Usamos getline para ler toda a linha incluindo espaços

    // 3- Contar as vogais na frase
    // Vamos percorrer cada letra  da string
    for(char c : frase) {
        // Converter a letra para minúscula para facilitar a comparação
        char lower_c = tolower(c);
        
        // Verificar se é uma vogal
        if(lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || 
           lower_c == 'o' || lower_c == 'u') {
            contador_vogais++; // Incrementar o contador se for vogal
        }
    }

    // Mostrar o resultado
    cout << "A frase tem " << contador_vogais << " vogais." << endl;

    return 0;
}