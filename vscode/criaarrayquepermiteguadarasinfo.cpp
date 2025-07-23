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
_______________________________________________________________________________________________________________________________________________________________________
versão com vetor: 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Automobile {
string brand;
float weight;
float price;
string color;
};

int main() {
vector<Automobile> fleet(100); // Vector with capacity for 100 cars

// Filling example
fleet[0] = {"BMW", 1500.0f, 45000.0f, "Black"};

// You can add more cars dynamically if needed
fleet.push_back({"Fiat", 950.0f, 18000.0f, "White"});

return 0;
}
_______________________________________________________________________________________________________________________________________________________________________
/* sabendo que tem uma lista simples baseada numa estrutura de nome "el, faça a função  conta() que receba um pointer para o 1º elemento da lista e devolve o total  de elementos existentes" */
#include <iostream>

using namespace std;

// Estrutura de cada nó da lista ligada
struct el {
    int valor;       // Dado do nó (pode ser de outro tipo, como float, string, etc.)
    el* proximo;     // Ponteiro para o próximo elemento
};

// Função que conta os elementos da lista
/* int conta(el* primeiro) {
    int total = 0;
    el* atual = primeiro;  // Começa no primeiro elemento
    
    while (atual != nullptr) {  // Enquanto não chegar ao fim da lista
        total++;
        atual = atual->proximo;  // Avança para o próximo nó
    }
    
    return total;
}

// Exemplo de uso (opcional)
int main() {
    // Criando alguns nós de exemplo
    el n3 = {30, nullptr};
    el n2 = {20, &n3};
    el n1 = {10, &n2};
    
    // Chamando a função conta()
    int totalElementos = conta(&n1);
    
    // (Opcional) Se quiser verificar no terminal:
    // cout << "Total de elementos: " << totalElementos << endl; // Saída: 3
    
    return 0;
} */
/* Explicação:
Estrutura el:

Cada elemento (el) contém um dado (valor) e um ponteiro para o próximo elemento (proximo).

Se proximo for nullptr, significa que é o último elemento da lista.

Função conta():

Recebe um ponteiro para o primeiro elemento (el* primeiro).

Percorre a lista incrementando um contador (total) até encontrar nullptr.

Retorna o total de elementos.

Exemplo de Uso (no main):

Criamos uma lista manualmente com 3 nós (n1 → n2 → n3).

Chamamos conta(&n1), que retorna 3.

Observações:
Se a lista estiver vazia, primeiro será nullptr e a função retornará 0.

Esta função funciona para listas ligadas simples (cada nó só sabe o próximo, não o anterior).*/
__________________________________________________________________________________________________________________________________________________________________________________
/* EScreva no ecra o total de euros empatado no stand dos 100 caros*/
#include <iostream>
#include <string>

using namespace std;

struct Automovel {
    string marca;
    float peso;    // em kg
    float preco;   // em euros
    string cor;
};

int main() {
    const int NUM_AUTOMOVEIS = 100;
    Automovel frota[NUM_AUTOMOVEIS];
    
    // Preenche os dados dos carros (exemplo genérico)
    for (int i = 0; i < NUM_AUTOMOVEIS; i++) {
        frota[i].marca = "Marca" + to_string(i+1);
        frota[i].peso = 1000.0f + (i * 50.0f);  // Peso fictício (1000kg a 5950kg)
        frota[i].preco = 20000.0f + (i * 1000.0f); // Preço fictício (20k€ a 119k€)
        frota[i].cor = (i % 2 == 0) ? "Vermelho" : "Azul"; // Cores alternadas
    }

    // Calcula o total empatado em euros
    float totalEuros = 0.0f;
    for (int i = 0; i < NUM_AUTOMOVEIS; i++) {
        totalEuros += frota[i].preco;
    }

    // Escreve o resultado no ecrã
    cout << "Total empatado no stand: " << totalEuros << " euros" << endl;

    return 0;
}
/*
Explicação:
Estrutura Automovel:

Armazena marca, peso, preco e cor de cada carro.

Preenchimento dos dados (exemplo fictício):

Usamos um loop para preencher os 100 carros com valores simulados:

preco varia de 20.000€ (carro 1) até 119.000€ (carro 100).

peso e cor são definidos de forma automática (apenas para exemplo).

Cálculo do total:

Somamos todos os preco dos carros no array frota.

Saída no ecrã:

O resultado é impresso em euros com cout.

*/
________________________________________________________________________________________________________________________________________________________________________________________
/* faça uma função que devolve a soma dos 2 parametros internos que recebe*/
#include <iostream>

using namespace std;

// Função que recebe dois inteiros e retorna a soma
int soma(int a, int b) {
    return a + b;
}
________________________________________________________________________________________________________________________________________________________________________
/* faça função k recebe um pointer para um float como parametro  e devolve no 2º parametro e por referencia de endereço o dobro */
#include <iostream>

using namespace std;

// Função que recebe um ponteiro para float e devolve o dobro no 2º parâmetro (por referência)
void dobro(float* valor, float* resultado) {
    if (valor != nullptr && resultado != nullptr) {  // Verifica ponteiros válidos
        *resultado = 2 * (*valor);  // Armazena o dobro no endereço apontado por 'resultado'
    }
}

int main() {
    float num = 10;
    float resultado;
    
    // Chamada da função
    dobro(&num, &resultado);
    
    cout << "O dobro de " << num << " é " << resultado << endl;  
    
    return 0;
}
/* Explicação:
Parâmetros:

float* valor: Ponteiro para o valor de entrada.

float* resultado: Ponteiro onde o dobro será armazenado.

Verificação de segurança:

A função verifica se os ponteiros são válidos (!= nullptr) antes de dereferenciá-los.


Na main(), passamos os endereços de num e resultado usando &.*/
______________________________________________________________________________________________________________________________________________________________________________
/* faça a funçao listar() que recebe um array  de inteiros e a sua dimensão e lista 1 elemento de uma linha */
#include <iostream>
using namespace std;

void listar(int array[], int dimensao) {
    for (int i = 0; i < dimensao; i++) {
        cout << array[i] << endl;  // Imprime um elemento por linha
    }
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    
    listar(numeros, tamanho);  // Chama a função para listar o array
    
    return 0;
}
