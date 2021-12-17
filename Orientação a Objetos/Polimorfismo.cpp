#include <iostream>
#include <string>

using namespace std;

/*
	Este código aborda os seguintes tópicos:
		- Polimorfismo
		- Métodos com mesmo nome na classe mãe e filha
		- Sobrecarga de métodos
		- Adiciona-se "virtual" na declação do método
		- Pode-se chamar o método da classe mae dentro do metodo da classe filha "Pessoa::mostra"
*/

class Pessoa
{
protected:
	string nome;
	int idade;
public:
	Pessoa(string _nome, int _idade);
	virtual void mostra();
};

Pessoa::Pessoa(string _nome, int _idade)
{
	nome = _nome;
	idade = _idade;
}

void Pessoa::mostra()
{
	cout << "Mostra pessoa: " << endl;
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
}


class Cliente : public Pessoa
{
private:
	float salario;
public:
	Cliente(string _nome, int _idade, float _salario);
	void mostra();
};

Cliente::Cliente(string _nome, int _idade, float _salario) : Pessoa(_nome, _idade)
{
	salario = _salario;
}

void Cliente::mostra()
{
	Pessoa::mostra();

	cout << "Mostra cliente: " << endl;
//	cout << "Nome: " << nome << endl;
//	cout << "Idade: " << idade << endl;
	cout << "Salario: " << salario << endl;
}

int main()
{
	Cliente cliente = Cliente("marcelo", 41, 452.60);

	cliente.mostra();

	return 0;
}