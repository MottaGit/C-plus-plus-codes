#include <iostream>
using namespace std;

int main()
{
	//type name;
	//type name = {};

	int num = 0;
	char letra = 'a';
	float dec2 = 3.5;
	bool flag = true; //or false
	string nome = "hello world";

	cout << "digite num (int): ";
	cin >> num;
	cout << "digite uma letra: ";
	cin >> letra;
	cout << "digite decimal: ";
	cin >> dec2;
	cout << "digite nome: ";
	cin >> nome;

	cout << num << endl;
	cout << letra << endl;
	cout << dec2 << endl;
	cout << flag << endl;
	cout << nome << endl;

	return 0;
}