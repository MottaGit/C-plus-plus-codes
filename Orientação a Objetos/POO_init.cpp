#include <iostream>
#include <string>
using namespace std;

/*
	Este código aborda os seguintes tópicos:
		- Programação orientada a objetos
		- Declaração de classes e métodos em C++
		- Encapsulamento de dados
*/

class Pessoa
{
	//atributos
	private:
		int id;
		string nome;
		int idade;

	//declaração dos métodos
	public:
		void setId(int _id);
		int getId();
		
		void setId(string _nome);
		string getNome();

		void setIdade(int _idade);
		int getIdade();
};

//implementação dos métodos
