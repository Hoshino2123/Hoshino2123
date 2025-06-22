#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> delDup(const vector<string>& vec) {
    // Verifica se o vetor está vazio
    if (vec.empty()) {
        return {};
    }

    // Cria uma cópia do vetor original para não modificar o input
    vector<string> resultado = vec;

    // Ordena o vetor para agrupar os duplicados
    sort(resultado.begin(), resultado.end());

    // Remove os duplicados consecutivos
    auto last = unique(resultado.begin(), resultado.end());
    
    // Apaga os elementos duplicados que foram movidos para o final
    resultado.erase(last, resultado.end());

    return resultado;
}

int main() {
    // Teste 1: Vetor com duplicados
    vector<string> palavras1 = {"banana", "maçã", "laranja", "banana", "uva", "maçã"};
    cout << "Vetor original 1: ";
    for (const auto& palavra : palavras1) {
        cout << palavra << " ";
    }
    
    vector<string> unicas1 = delDup(palavras1);
    cout << "\nStrings únicas 1: ";
    for (const auto& palavra : unicas1) {
        cout << palavra << " ";
    }
    cout << endl

    // Teste 2: Vetor sem duplicados
    vector<string> palavras2 = {"cao", "gato", "peixe"};
    cout << "Vetor original 2: ";
    for (const auto& palavra : palavras2) {
        cout << palavra << " ";
    }
    
    vector<string> unicas2 = delDup(palavras2);
    cout << "\nStrings únicas 2: ";
    for (const auto& palavra : unicas2) {
        cout << palavra << " ";
    }
    cout << endl

    // Teste 3: Vetor vazio
    vector<string> palavras3;
    cout << "Vetor original 3: [vazio]";
    
    vector<string> unicas3 = delDup(palavras3);
    cout << "\nStrings únicas 3: ";
    for (const auto& palavra : unicas3) {
        cout << palavra << " ";
    }
    cout << endl;

    // Teste 4: Todos elementos iguais
    vector<string> palavras4 = {"hello", "hello", "hello"};
    cout << "Vetor original 4: ";
    for (const auto& palavra : palavras4) {
        cout << palavra << " ";
    }
    
    vector<string> unicas4 = delDup(palavras4);
    cout << "\nStrings únicas 4: ";
    for (const auto& palavra : unicas4) {
        cout << palavra << " ";
    }
    cout << endl;

    return 0;
}
/* Funcionamento da função delDup():
Verificação inicial:

Se o vetor de entrada estiver vazio, retorna imediatamente um vetor vazio

Cópia do vetor:

Cria uma cópia do vetor original para não modificar o input

Ordenação:

Ordena o vetor para agrupar os elementos duplicados

Remoção de duplicados:

Usa unique() para mover os duplicados para o final do vetor

Usa erase() para remover os elementos duplicados

Retorno:

Retorna um novo vetor contendo apenas strings únicas

Características importantes:
Complexidade: O(n log n) devido à ordenação

Estabilidade: Não mantém a ordem original dos elementos (devido à ordenação)

Segurança: Não modifica o vetor original

Tratamento de casos especiais:

Vetor vazio

Todos elementos iguais

Sem duplicados */