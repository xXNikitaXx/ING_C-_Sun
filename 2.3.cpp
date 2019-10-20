#include <iostream>

using namespace std;

int main()
{
	int x1, y1, x2, y2;

	cin >> x1 >> y1 >> x2 >> y2;

	if ((x1 + 5 == x2 || x1 - 5 == x2) && (y1 + 2 == y2 || y1 - 2 == y2))
	{
		cout << "YESSSS!";
	}
	else if ((x1 + 2 == x2 || x1 - 2 == x2) && (y1 + 5 == y2 || y1 - 5 == y2))
	{
		cout << "YESSSS!";
	}
	else
	{
		cout << "No no";
	}

	return 0;
}