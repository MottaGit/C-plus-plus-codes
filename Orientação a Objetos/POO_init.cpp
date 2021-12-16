#include <iostream>
#include <string>
using namespace std;

/*
	Este c�digo aborda os seguintes t�picos:
		- Programa��o orientada a objetos
		- Declara��o de classes e m�todos em C++
		- Encapsulamento de dados
*/

class Pessoa
{
	//atributos
	private:
		int id;
		string nome;
		int idade;

	//declara��o dos m�todos
	public:
		void setId(int _id);
		int getId();
		
		void setId(string _nome);
		string getNome();

		void setIdade(int _idade);
		int getIdade();
};

//implementa��o dos m�todos
