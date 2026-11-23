#include <iostream>
using namespace std;

void odwroc(const char tekst[]) {
	int dlugosc = 0;

	while (tekst[dlugosc] != '\0') {
		dlugosc++;
	}

	for (int i = dlugosc; i >= 0; i--) {
		cout << tekst[i];
	}
}

int main() {
	char tekst[1025];
	cout << "Podaj tekst:\n";
	cin.getline(tekst, 1025);
	odwroc(tekst);
}