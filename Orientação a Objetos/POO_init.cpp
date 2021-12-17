#include <iostream>
#include <string>
using namespace std;

/*
	Este c�digo aborda os seguintes t�picos:
		- Programa��o orientada a objetos
		- Declara��o de classes e m�todos em C++
		- Encapsulamento de dados
		- Construtor de classe
*/

class Pessoa
{
	//defini��o dos atributos
	private:
		int id;
		string nome;
		int idade;

	//declara��o dos m�todos
	public:
		//Definindo um construtor para a classe
		Pessoa(int _id, string _nome, int _idade);

		void setId(int _id);
		int getId();
		
		void setNome(string _nome);
		string getNome();

		void setIdade(int _idade);
		int getIdade();
};

//implementa��o dos m�todos

//construtor
Pessoa::Pessoa(int _id, string _nome, int _idade)
{
	id = _id;
	nome = _nome;
	idade = _idade;
}

void Pessoa::setId(int _id)
{
	id = _id;
}

int Pessoa::getId()
{
	return id;
}

void Pessoa::setNome(string _nome)
{
	nome = _nome;
}

string Pessoa::getNome()
{
	return nome;
}

void Pessoa::setIdade(int _idade)
{
	idade = _idade;
}

int Pessoa::getIdade()
{
	return idade;
}

int main()
{
	/*
	//declaro objeto amigo, usando a classe Pessoa
	Pessoa amigo;

	//set dos atributos de amigo, usando os m�todos da classe Pessoa
	amigo.setId(1);
	amigo.setNome("joao");
	amigo.setIdade(34);
	*/

	//criando objeto com o uso do construtor
	Pessoa amigo = Pessoa(1, "pedro", 41);

	cout << "ID: " << amigo.getId() << endl;
	cout << "Nome: " << amigo.getNome() << endl;
	cout << "Idade: " << amigo.getIdade() << endl;
	
	return 0;
}