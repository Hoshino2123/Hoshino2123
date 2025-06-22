#include <iostream>
#include <vector>
#include <numeric> // Para std::accumulate
using namespace std;
//1. Funções para Trabalhar com Vectores

// 1. Adição de Elementos (versão função)
void adicionarElementos(vector<int>& vec, int quantidade) {
    int num;
    for (int i = 0; i < quantidade; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> num;
        vec.push_back(num);
    }
}

// 2. Cálculo de Média (versão função)
double calcularMedia(const vector<double>& vec) {
    if (vec.empty()) return 0.0;
    double soma = accumulate(vec.begin(), vec.end(), 0.0);
    return soma / vec.size();
}

// 3. Soma de Vetores (versão função)
vector<int> somarVetores(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> resultado;
    for (size_t i = 0; i < vec1.size(); i++) {
        resultado.push_back(vec1[i] + vec2[i]);
    }
    return resultado;
}

// 4. Ordenação (versão função)
void ordenarVetor(vector<int>& vec) {
    sort(vec.begin(), vec.end());
}

// 5. Pesquisa (versão função)
int pesquisarElemento(const vector<int>& vec, int valor) {
    auto it = find(vec.begin(), vec.end(), valor);
    return (it != vec.end()) ? distance(vec.begin(), it) : -1;
}

// Função auxiliar para mostrar vetor
template <typename T>
void mostrarVetor(const vector<T>& vec) {
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}
//2. Função Main() para Testar
int main() {
    cout << "=== Teste das Funções com Vectores ===\n\n";

    // Teste 1: Adição de Elementos
    {
        vector<int> numeros;
        cout << "1. Adicionar 3 elementos ao vetor:\n";
        adicionarElementos(numeros, 3);
        cout << "Vetor resultante: ";
        mostrarVetor(numeros);
    }

    // Teste 2: Cálculo de Média
    {
        vector<double> valores(3);
        cout << "\n2. Digite 3 valores reais:\n";
        for (auto& val : valores) {
            cin >> val;
        }
        cout << "Média: " << calcularMedia(valores) << endl;
    }

    // Teste 3: Soma de Vetores
    {
        vector<int> v1 = {1, 2, 3}, v2 = {4, 5, 6};
        cout << "\n3. Soma de vetores:\n";
        auto resultado = somarVetores(v1, v2);
        cout << "Resultado: ";
        mostrarVetor(resultado);
    }

    // Teste 4: Ordenação
    {
        vector<int> desordenado = {3, 1, 4, 2};
        cout << "\n4. Vetor antes da ordenação: ";
        mostrarVetor(desordenado);
        ordenarVetor(desordenado);
        cout << "Vetor ordenado: ";
        mostrarVetor(desordenado);
    }

    // Teste 5: Pesquisa
    {
        vector<int> valores = {10, 20, 30, 40};
        cout << "\n5. Pesquisa do valor 30: ";
        int pos = pesquisarElemento(valores, 30);
        if (pos != -1) {
            cout << "Encontrado na posição " << pos << endl;
        } else {
            cout << "Não encontrado\n";
        }
    }

    return 0;
}
/* Características da Implementação:
Organização Modular:

Cada operação está encapsulada em sua própria função

Funções são reutilizáveis e independentes

Segurança:

Uso de const para parâmetros não modificados

Verificação de vetor vazio no cálculo da média

Eficiência:

Passagem por referência para evitar cópias

Uso de algoritmos da STL (accumulate, sort, find)

Testes Abrangentes:

A função main() testa todos os casos de uso

Inclui exemplos com diferentes tipos de vetores
