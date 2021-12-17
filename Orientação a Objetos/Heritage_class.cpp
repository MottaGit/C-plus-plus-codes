#include <iostream>
#include <string>

using namespace std;

/*
	Este c�digo aborda os seguintes t�picos:
		- Heran�a de classes em C++
		- Declara��o de classes m�es e filhas
		- Classe Pessoa � a classe m�e
		- Classe Cliente � a classe filha, herda os atributos e m�todos da classe m�e
		- Atributos protected podem ser acessados pela propria classe e pelas filhas
*/

class Pessoa
{
	protected:
		string nome;
		int idade;
	public:
		Pessoa(string _nome, int _idade);	//construtor
		void mostraPessoa();
};

Pessoa::Pessoa(string _nome, int _idade)
{
	nome = _nome;
	idade = _idade;
}

void Pessoa::mostraPessoa()
{
	cout << "Mostra pessoa: " << endl;
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
}

//Classe filha
class Cliente : public Pessoa
{
	private:
		float salario;
	public:
		Cliente(string _nome, int _idade, float _salario); //declara��o construtor classe filha
		void mostraCliente();
};

//implementa��o construtor classe filha, reaproveitando o construtor da classe mae
Cliente::Cliente(string _nome, int _idade, float _salario) : Pessoa(_nome, _idade)
{
	salario = _salario;
}

void Cliente::mostraCliente()
{
	cout << "Mostra cliente: " << endl;
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Salario: " << salario << endl;
}

int main()
{
	/*
	Pessoa amigo = Pessoa("henrique", 23);
	Pessoa amigo2 = Pessoa("maria", 22);

	amigo.mostraPessoa();
	amigo2.mostraPessoa();
	*/

	Cliente p1 = Cliente("pedroca", 23, 3540.50);

	p1.mostraCliente();

	return 0;
}