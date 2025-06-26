#include <iostream>
#include <vector>
using namespace std;

/* Um vector é basicamente um array clássico, com a gestão de memória feita automaticamente
    isto permite inserir ou apagar elementos, entre outras ações.
    Notas:
    - pode acontecer uma realocação do espaço, o que tem custos de espaço e velocidade
    - idealmente só se devem acrescentar/remover elementos no final do vector
    - o vector faz a sua própria gestão de memória, o que significa que se pode usar
      o operador = para fazer uma cópia (deep copy)

    Este programa mostra vários dos métodos do vector:
        .assign()   .at()           .front()        .back()         <== aceder ao elemento (read/write)
        .size()     .empty()        .data()
        .insert()   .push_back()
        .erase()    .pop_back()     .clear()    
        .begin()    .end()          .rbegin()       .rend()         <== devolvem iterador
        .cbegin()   .cend()         .crbegin()      .crend()        <== devolvem iterador constante
    
    Existe uma função que permite trocar 2 vetores que sejam do mesmo tipo (não depende da dimensão)
        swap( vector1, vector2 )
*/

int main ()
{
    vector<int> myVector;    // criar um vector vazio
    vector<int> myV2(5);     // vector com 5 posições iniciadas com zero
    vector<int> myV3(4,33);  // vector com 4 posições iniciadas com 33
    vector<string> nomesV = {"Jorge", "Leiria", "Pires"}; // podem-se iniciar vários elementos
    vector<string> outroV, maisV;     

    // Aceder a um elemento do vector pode ser feito da forma tradicional
    cout << "\'myVector[1]\' = " << myV3[1] << endl;

    // Usando o atributo at(), os limites são automaticamente testados
    cout << "\'myVector.at(1)\' = " << myV3.at(1) << endl;
    // experimente trocar o 1, por 4 ou mais, e veja a exceção que é lançada

    // Adicionar um elemento
    myVector.push_back(78); // adiciona elemento 78 no final
    myVector.push_back(55); // agora o vector ficou com 78 55

    cout << "\nListar elementos de \'myVector\'\n";
    for(auto &el: myVector){
        cout << el << endl;
    }
    // Note que poderia ter escrito "el" em vez de "&el", uma vez que não pretende
    // modificar os elementos do array.
    // Desvantagem: se o elemento for muito grande, "el" vai criar uma cópia do mesmo
    // Vantagem: "el" é mais rápido que &el"

    // ver quantos elementos tem
    cout << "\n\'myV3\' tem " << myV3.size() << " elementos\n";

    // apagar o último elemento
    myV3.pop_back();

    cout << "Depois de apagado um elemento, \'myV3\' tem " << myV3.size() << " elementos\n";

    // apagar todos os elementos
    myV3.clear();
    cout << "Após \'myVector3.clear()\' ";

    // testar se está vazio
    if( myV3.empty() ){
        cout << "\'myVector3\' está vazio\n";
    } else{
        cout << "\'myVector3\' não está vazio\n";
    }

    cout << "\n\'myV2\' tem 5 zeros\n";

    // alterar elemento no início e no fim
    // ATENÇÃO: o comportamento é imprevisível caso o vector esteja vazio
    myV2.front() = 8; // equivalente a myV2[0] = 8
    myV2.back() = 7;
    cout << "Listar após escrever 8 no início e 7 no fim\n";
    for(auto el: myV2){
        cout << el << ' ';
    }
    cout << endl;

    // para ultrapassar o problema indicado anteriormente, pode-se usar iteradores
    // myV2.begin() e myV2.end() indicam o início e o fim do vector
    cout << "Listar usando iteradores\n";
    for( auto it=myV2.begin(); it != myV2.end(); it++){ // 'auto' podia ser 'vector<int>::iterator'
        cout << *it << ' ';
    }
    cout  << endl;
    // Se pretendermos atravessar o vector do fim para o princípio, basta usarmos
    // .rbegin() e .rend() no 'for' em vez de .begin() e .end() (o it++ mantém-se)

    // Como os elementos do vector são contíguos na memória (como nos arrays)
    // pode-se usar um pointer para iterar
    // Para isso precisamos do método .data() que nos devolve o endereço do 1º elemento
    // Atenção que 'p = &myVector' não funciona, porque myVector é um objeto!!!
    string* ptr;

    // Listar
    cout << "\nVector de nomes:\n";
    for(auto& el : nomesV){
        cout << el << ' ';
    }
    cout << endl;

    ptr = nomesV.data(); // endereço inicial
    cout << *ptr;
    ptr++; // passar ao próximo
    cout << ' ' << *ptr;
    cout << endl;

    // 5 formas de aceder ao primeiro elemento
    cout << "\nPrimeiro nome = " << nomesV[0];
    cout << "\nPrimeiro nome = " << nomesV.at(0);
    cout << "\nPrimeiro nome = " << nomesV.front();
    cout << "\nPrimeiro nome = " << *nomesV.begin();
    cout << "\nPrimeiro nome = " << *(nomesV.rend()-1);  // atenção ao -1
    cout << endl;

    // 5 formas de aceder ao último elemento
    cout << "\nÚltimo nome = " << nomesV[nomesV.size()-1];
    cout << "\nÚltimo nome = " << nomesV.at(nomesV.size()-1);
    cout << "\nÚltimo nome = " << nomesV.back();
    cout << "\nÚltimo nome = " << *(nomesV.end()-1); // atenção ao -1
    cout << "\nÚltimo nome = " << *nomesV.rbegin();
    cout << endl;

    // pode-se usar o .assign() para atribuir vários valores de uma só vez
    outroV.assign({"Jorge", "Manuel", "Leiria", "Pires"});
    // também podia ser feito assim: outroV = {"Jorge", "Manuel", "Leiria", "Pires"};
    cout << "\nVector original\n";
    for(auto &el : outroV) cout << el << ' ';
    
    // inclusive com processos mais "complicados"
    maisV.assign( outroV.cbegin()+1, outroV.cend()-1);

    cout << "\n\nCópia parcial obtida usando o .assign()\n";
    for(auto &el : maisV) cout << el << ' ';

    // Utilização do .insert()
    // .insert(posição_iterador, valor)
    // .insert(posição_iterador, quantidade_de_elementos, valor)
    // inserir um elemento 'no meio' do vector
    maisV.insert( maisV.begin()+1, "Lopes"); // insere na 2ª posição

    cout << "\n\nUsando o .insert() para inserir \"Lopes\" no meio\n";
    for(auto &el : maisV) cout << el << ' ';



   return 0;
}