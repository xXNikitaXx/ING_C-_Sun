#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//���� ���������� ��������: 65-122

bool isWord(string *p_word) //�������� �� ����� 
{
	bool res = true;
	
	string word = *p_word;

	int size = word.length();

	switch (word[size - 1])
	{
		case ',':
		{
			p_word->erase(size - 1, 1);
			size--;
			break;
		}
		case '!':
		{
			p_word->erase(size - 1, 1);
			size--;
			break;
		}
		case '?':
		{
			p_word->erase(size - 1, 1);
			size--;
			break;
		}
		case '.':
		{
			p_word->erase(size - 1, 1);
			size--;
			break;
		}
		case ';':
		{
			p_word->erase(size - 1, 1);
			size--;
			break;
		}
	}

	if (size > 3)
	{
		for (int i = 0; i < size; i++)
		{
			if ((int)(word[i]) < 65 || (int)(word[i]) > 122)
			{
				res = false;
				break;
			}
		}
	}
	else
	{
		res = false;
	}

	return res;
}

void changeRegister(string *p_word) //���������� � ������ ��������
{
	string str = *p_word;

	int size = str.length();

	for (int i = 0; i < size; i++)
	{
		str[i] = tolower(str[i]);
	}

	*p_word = str;
}

int main() 
{
	setlocale(LC_ALL, "ru");

	string path;
	cin >> path;

	ifstream fin;
	fin.open(path);

	const int N = 100;
	string Words[N]{}; //������ ����
	int count[N]{}; //������, ������������ ������� ����� ���� �����������
	int sizeArr = 0;

	bool isAlreadyIn = false;

	if (!fin.is_open()) 
	{
		cout << "������ �������� �����!" << endl;
		return 0;
	}
	else 
	{
		string word;
		while (!fin.eof()) 
		{
			fin >> word;
			if (isWord(&word))
			{
				changeRegister(&word);
				for (int i = 0; i < N; i++)
				{
					if (word == Words[i]) //���� �����������, �� ����������� ������� ����� �����
					{
						count[i]++;
						isAlreadyIn = true;
						break;
					}
				}
				if (!isAlreadyIn) //���� �� �����������, ���������� � ������ ��� ���� �����
				{
					sizeArr++;
					Words[sizeArr - 1] = word;
					count[sizeArr - 1] = 1;
				}
			}
			isAlreadyIn = false;
		}
	}

	fin.close();

	const int size_max = 5;
	int max[size_max]{};
	int ind[size_max]{};

	for (int i = 0; i < sizeArr; i++) //���������� ��� 5
	{
		for (int j = 0; j < size_max; j++)
		{
			if (count[i] > max[j])
			{

				for (int k = size_max-1; k >= j + 1; k--)
				{
					max[k] = max[k - 1];
					ind[k] = ind[k - 1];
				}

				max[j] = count[i];
				ind[j] = i;

				break;
			}
		}
	}
	
	string Words_max[size_max]{};

	string temp;

	for (int i = 0; i < size_max; i++) //���������� � ��������� ������
	{
		Words_max[i] = Words[ind[i]];
	}

	for (int i = 0; i < size_max; i++) //���������� �� ��������
	{
		for (int j = i; j < size_max-1; j++)
		{
			if ((int)(Words_max[j][0]) > (int)(Words_max[j + 1][0])) //���������� ���� ������ ��������
			{
				temp = Words_max[j];
				Words_max[j] = Words_max[j + 1];
				Words_max[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size_max; i++)
	{
		cout << Words_max[i] << endl;
	}
	
	return 0;
}