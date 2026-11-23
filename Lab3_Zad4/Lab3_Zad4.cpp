#include <iostream>
using namespace std;

int main()
{
	int rozmiar = 0;
	
	cout << "Podaj rozmiar 'macierzy': ";
	cin >> rozmiar;

	if (rozmiar <= 0)
	{
		cout << "Niepoprawny rozmiar macierzy!" << endl;
		return -1;
	}

	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			if (i == j || i + j == rozmiar - 1)
			{
				cout << "1 ";
			}
			else
			{
				cout << "0 ";
			}
		}
		cout << endl;
	}
}