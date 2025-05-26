/***********************************************************
	Ao passar uma estrutura como parâmetro para uma função,
	ela segue as regras de outra variável simples
	pode ser passada por VALOR
	pode ser passada por REFERÊNCIA DE ENDEREÇO
	pode ser passada por POINTER
************************************************************/	
#include <iostream>
#include <cstring>
using namespace std;

// Definição da estrutura
struct pes{
	string nome;
	int idade;
};

void listar(pes p){
	cout << "Nome: " << p.nome << endl;
	cout << "Idade: " << p.idade << endl;
}

// passagem por VALOR
void tentaAlterar(pes p){
	cout << "\nEntrou no \"tentaAlterar()\"\n";
	p.nome = "Pedro";
	p.idade+=3;
	cout << "Dentro da função, as alterações são feitas\n";
	listar(p);
	// Iremos verificar que as alterações NÃO SÃO reconhecidas fora da função
}

// passagem por REFERÊNCIA de ENDEREÇO
void alteraMesmo(pes &p){
	cout << "\nEntrou no \"alteraMesmo()\"\n";
	p.nome = "Artur";
	p.idade++;
	cout << "Dentro da função, as alterações são feitas\n";
	listar(p);
	// Iremos verificar que as alterações SÃO reconhecidas fora da função
}

// passagem por POINTER
// Note-se que dentro da função se pode usar
// 		(*p).nome
// 	ou
// 		p->nome
void alteraMesmoPointer(pes *p){
	cout << "\nEntrou no \"alteraMesmoPointer()\"\n";
	p->nome = "Josefa";
	p->idade++;
	cout << "Dentro da função, as alterações são feitas\n";
	listar(*p);
	// Iremos verificar que as alterações SÃO reconhecidas fora da função
}

int main(int argc, char** argv) {
	pes pessoa;
	
	pessoa.nome = "Jorge";
	pessoa.idade = 10;
	
	cout << "Dados da pessoa\n";
	listar(pessoa);
	
	// Tentar alterar os dados da pessoa
	tentaAlterar(pessoa);
	cout << "\nDepois da função \"tentaAlterar()\", nem o nome nem a idade foram modificados\n";
	listar(pessoa);
	
	// Alterar os dados da pessoa
	alteraMesmo(pessoa);
	cout << "\nDepois da função \"alteraMesmo()\", o nome e a idade foram modificados\n";
	listar(pessoa);
	
	alteraMesmoPointer(&pessoa);
	cout << "\nDepois da função \"alteraMesmoPointer()\", o nome e a idade foram modificados\n";
	listar(pessoa);
	
	cout << "\nConclusão:\nAo passar uma estrutura como parâmetro,\n"
		 << "    pode-se passar por valor -> tentaAlterar()\n"
		 << "    ou\n"
		 << "    por referência de endereço -> alteraMesmo()\n"
		 << "    ou\n"
		 << "    por pointer -> alteraMesmoPointer()\n";
	
	return 0;
}