#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> X;
	vector <int> Y;
	int x, y;
	bool isBeat = false;

	for (int i = 0; i < 8; i++)
	{
		cin >> x >> y;
		X.push_back(x);
		Y.push_back(y);
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			if (X[i] + Y[i] == X[j] + Y[j] || X[i]==X[j] || Y[i]==Y[j])
			{
				isBeat = true;
			}
		}
	}

	if (isBeat)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}