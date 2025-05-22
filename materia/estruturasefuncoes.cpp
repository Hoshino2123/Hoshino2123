    /* podemos passar por valor (só de entrada)
    .  podemos passar por endereço (só de saída)
    .  podemos passar por pointer (entrada/saída)
    NOTA: para aceder a um campo de uma estrutura  apontada por um pointer,
    usa-se (*pointer).campo,
    ou pointer-> campo.
    Exemplo: (*Paluno).nome - Paluno -> nome
    */
    #include <iostream>
    #include <string>

    using namespace std;

    struct fruto {
        string nome;
        int preco;
    };
    // Funções.
    void ler(fruto &var); //endereço 
    void listar(fruto var); //valor
    void aumentarpreco (fruto *var); //passagem por pointer
    int main (){
        fruto uva;
    ler(uva);
    listar(uva);
    aumentarpreco(&uva);
    listar(uva);
        return 0;
    }
    void ler(fruto &var) { //passagem poe endereço
        cout << "preço= ";
        cin >> var.preco;
        cin.ignore();
        getline(cin, var.nome);
    }
    void listar(fruto var){ //passagem por valor
        cout << "preço = "
        << var.preco
        << endl
        << "Nome = "
        << var.nome;
    }
    void aumentarpreco(fruto *var) {
        //aumentar preço 10%
        (*var).preco *= 1.1; // ou fazemos assim ou var ->preco * = 0.1;
    }

