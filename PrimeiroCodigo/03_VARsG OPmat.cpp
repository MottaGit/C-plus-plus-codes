#include <iostream>
using namespace std;

int n1 = 10;

int main()
{
	// Operadores matem�ticos: + - / * % ()
	int n2 = 5;

	cout << "var global e local:" << endl;
	cout << n1 << endl;
	cout << n2 << endl;

	//incremento
	cout << "\nincrementos:" << endl;
	n1 += 1;
	cout << n1 << endl;
	n2++;
	cout << n2 << endl;

	//p�s incremento e pr� incremento: n1++ ou ++n1
	cout << "\npre e pos incremento:" << endl;
	int n3 = 17;
	cout << n3++ << endl;
	cout << n3 << endl;

	int n4 = 21;
	cout << ++n4 << endl;

	return 0;
}