#include <iostream> 
using namespace std;

int main()
{
	double a = 0.0, b = 0.0;
	char dzialanie = '+';
	bool czyKontynuowac = true;

	while (czyKontynuowac)
	{
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj dzialanie (+, -, *, /): ";
		cin >> dzialanie;
		cout << "Podaj druga liczbe: ";
		cin >> b;

		if (dzialanie == '+')
			cout << "\nWynik: " << a + b << endl;
		else if (dzialanie == '-')
			cout << "\nWynik: " << a - b << endl;
		else if (dzialanie == '*')
			cout << "\nWynik: " << a * b << endl;
		else if (dzialanie == '/')
		{
			if (b != 0)
				cout << "\nWynik: " << a / b << endl;
			else
				cout << "\nBlad: dzielenie przez zero!" << endl;
		}

		cout << "\nCzy chcesz kontynuowac? (1 - tak, 0 - nie): ";
		cin >> czyKontynuowac;
		cout << endl;
	}
}