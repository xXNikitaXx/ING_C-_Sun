#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	char str[255];
	double sum;

	cin.getline(str, 255);

	sum = 0.23 * strlen(str);

	int rubles = (int)sum;

	int pennies = (int)((sum - floor(sum)) * pow(10, 2));

	cout << rubles << " р. " << pennies << " коп." << endl;

	return 0;
}