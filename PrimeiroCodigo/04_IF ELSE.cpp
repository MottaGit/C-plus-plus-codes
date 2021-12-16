#include <iostream>
using namespace std;

int main()
{
	int n1 = 0, n2 = 0;

	cout << "digite n1: ";
	cin >> n1;
	cout << "digite n2: ";
	cin >> n2;

	float media = (n1 + n2) / 2.0;

	if (media >= 7)
	{
		cout << "aprovado" << endl;
		cout << media;
	}
	else if (media >= 5)
	{
		cout << "recuperacao" << endl;
		cout << media;
	}
	else
	{
		cout << "reprovado" << endl;
		cout << media;
	}

	/*
	if (n1 > 10)
	{
		cout << "maior que 10!" << endl;
	}
	else
	{
		cout << "menor que 10!" << endl;
	}
	*/

	

	return 0;
}