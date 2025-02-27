#include <iostream>
using namespace std;

#include <iostream>

int main() {
    int numero, resto, soma = 0;

   
    std::cout << "insira um número inteiro para obter o soma dos digitos: ";
    std::cin >> numero;

    while (numero > 0) {
        resto = numero % 10; 
        soma += resto;       
        numero /= 10;        
    }
    std::cout << "a soma é " << soma << std::endl;
    return 0; 
}