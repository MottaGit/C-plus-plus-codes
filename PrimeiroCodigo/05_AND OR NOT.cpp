#include <iostream>
using namespace std;

int main()
{
	/*
	operador AND : &&
	operador OR: ||
	operador NOT: !
	*/
	
	cout << "digite num1: ";
	int num;
	cin >> num;

	
	if (num > 4 && num < 10)
	{
		cout << "esta entre 4 e 10" << endl;
	}
	else
	{
		cout << "fail" << endl;
	}
	
	cout << "\ndigite num2: ";
	int num2;
	cin >> num2;

	if (num2 > 5 || num2 < 0)
	{
		cout << "fail" << endl;
	}
	else
	{
		cout << "esta entre 0 e 5" << endl;
	}

	if (!num2)
	{
		cout << "\nnum2 igual 0\n";
	}
	else
	{
		cout << "\nnum2 diferente de 0\n";
	}

	return 0;
}