#include <iostream>
using namespace std;

int main()
{
	double a = 0, b = 0, c = 0, p = 0, pole = 0, obwod = 0;
	char figura = 't';

	cout << "Wybierz figure (t - trojkat, k - kwadrat): ";
	cin >> figura;

	switch (figura) {
	case 't':
		cout << "Podaj dlugosc bokow trojkata:\n";
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;

		if (a <= 0 || b <= 0 || c <= 0) {
			cout << "\nDlugosci bokow trojkata musza byc wartoscia dodatnia\n" << endl;
			return -1;
		}

		if (a + b <= c || a + c <= b || b + c <= a) {
			cout << "\nKazdy bok trojkata musi byc krotszy od sumy dwoch pozostalych\n" << endl;
			return -1;
		}

		p = (a + b + c) / 2;
		pole = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Pole trojkata: " << pole << endl;
		cout << "Obwod trojkata: " << a + b + c << endl;
		break;
	case 'k':
		cout << "Podaj dlugosc boku kwadratu: ";
		cin >> a;

		if (a <= 0) {
			cout << "\nDlugosc boku kwadratu musi byc wartoscia dodatnia\n" << endl;
			return -1;
		}

		pole = a * a;
		obwod = 4 * a;
		cout << "Pole kwadratu: " << pole << endl;
		cout << "Obwod kwadratu: " << obwod << endl;
		break;
	default:
		cout << "Nieznana figura\n" << endl;
		return -1;
	}
}