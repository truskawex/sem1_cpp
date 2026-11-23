#include <iostream>
using namespace std;

void statystykaTekstu(const char tekst[]) {
	int dlugosc = 0, litery = 0, cyfry = 0, spacje = 0, inne = 0;

	for (int i = 0; tekst[i] != '\0'; i++) {
		dlugosc++;
		char c = tekst[i];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			litery++;
		}
		else if ((c >= '0') && (c <= '9')) {
			cyfry++;
		}
		else if (c == ' ') {
			spacje++;
		}
		else {
			inne++;
		}
	}

	cout << "\nLitery: " << litery;
	cout << "\nCyfry: " << cyfry;
	cout << "\nSpacje: " << spacje;
	cout << "\nPozostale: " << inne;
	cout << "\nRazem: " << dlugosc << endl;
}

int main() {
	char tekst[1025];
	cout << "Podaj tekst:\n";
	cin.getline(tekst, 1025);
	statystykaTekstu(tekst);
}