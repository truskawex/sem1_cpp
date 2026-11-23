#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, wynik = 0;
	int tablica[1024] {};

	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;

	if (b < a || a < 1) {
		cout << "Niepoprawny zakres\n";
		return -1;
	}

	for (int i = 0; i <= b - a; i++) {
		tablica[i] = a + i;

		if (tablica[i] < 10) {
			cout << tablica[i] << " ";
			wynik++;
		}
		else {
			if (tablica[i] / 10 < tablica[i] % 10) {
				cout << tablica[i] << " ";
				wynik++;
			}
		}
	}

	cout << "\nWynik: " << wynik << endl;
}