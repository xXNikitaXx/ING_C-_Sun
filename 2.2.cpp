#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	float a, b;
	string operation;

	cin >> a >> b >> operation;

	if (operation == "/" && b != 0)
	{
		cout << a / b << endl;
	}
	else if (operation == "*")
	{
		cout << a * b << endl;
	}
	else if (operation == "+")
	{
		cout << a + b << endl;
	}
	else if (operation == "-")
	{
		cout << a - b << endl;
	}
	else
	{
		cout << "лллллл";
	}

	return 0;
}