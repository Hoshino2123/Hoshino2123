/* Contentor vector
Os elementos de um vetor são contíguos na memória tal como no array tradicional
Acesso/modificação do conteúdo.

assign() - serve para atribuir valores a vários  elementos de uma só vez.
at() - semelhante ao índice
front() 1º elemento
back() - último elemento
Vários valores
size() - diz o total  de elementos
empty() - devolve true se vetor vazio
data() - devolve um pointer para  o 1º elemento

tradicional
int ar[3]={10,20,30};
int *p;

p=ar; - apontar para  o 1º elemento

vector
vector <int> ve={10,20,30};
int *p;

p= ve.data(); - apontar para o 1º elemento/

/* inserir/remover elementos
insert() - inserir no local escolhido
push.back() - insere no fim
erase() - remove na posição indicada
pop_back() - remove oo último
clear() - remove todos

/* detalhes do método insert()
insert(iterador,valor)
insert(iterador,total_de_elementos,valor)
iterador é o local onde se insere

exemplos usando iteradores
vector <string> frutas = {"uva","manga","banana"};
adicionar uma laranja no início
frutas.insert(frutas.begin(),"laranja");
adicionar um morango no fim
frutas.push_back("morango");
//criar 1 iterador pra o vetor frutas
vector<sting>::iterador ir;
//forma quando não se sabe o tipo da vector
auto it=frutas.begin(); */

/* apontar o iterador pra  o 2º fruto.

/* contentor forward_list
inplementa uma lista simmples (só com o pointer next)
comparandoo com a lista já implementada, usa-se 1 iterador para percorrer o contentor, em vez do tradicional pointer
para avançar um iterador para o  elemento seguinte usase it++, em vez do ptr=ptR-> next, da lista tradicional
métodos
push_front() - insere na 1ª posição
pop_front() - remove o 1º elemento
insert_after() - insere depois da posição indicada pelo iterador
erase_after() - remove depois da posição indicada pelo iterador