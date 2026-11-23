#include <iostream>
#include "funkcje.h"
using namespace std;

int main()
{
	int a = 0, b = 0;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;

	if (a <= 0 || b <= 0) {
		cout << "Liczby musza byc dodatnie\n";
		return -1;
	}

	cout << "Najwiekszy wspolny dzielnik: " << nwd(a, b) << endl;
}