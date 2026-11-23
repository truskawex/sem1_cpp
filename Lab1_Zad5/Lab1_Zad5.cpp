#include <iostream>
using namespace std;

int main()
{
	int Rok = 0, Miesiac = 0, Dzien = 0, RokDzisiaj = 0, MiesiacDzisiaj = 0, DzienDzisiaj = 0;
	cout << "Podaj date urodzenia:\n";
	cout << "Rok: ";
	cin >> Rok;
	cout << "Miesiac: ";
	cin >> Miesiac;
	cout << "Dzien: ";
	cin >> Dzien;

	cout << endl;

	cout << "Podaj dzisiejsza date:\n";
	cout << "Rok: ";
	cin >> RokDzisiaj;
	cout << "Miesiac: ";
	cin >> MiesiacDzisiaj;
	cout << "Dzien: ";
	cin >> DzienDzisiaj;

	int lacznieDni = Rok * 365 + (Miesiac - 1) * 30 + Dzien;
	int lacznieDniDzisiaj = RokDzisiaj * 365 + (MiesiacDzisiaj - 1) * 30 + DzienDzisiaj;
	int roznica = lacznieDniDzisiaj - lacznieDni;

	if (roznica < 0) {
		cout << "Data urodzenia nie moze byc wieksza od dzisiejszej daty" << endl << endl;
		return -1;
	}

	cout << "Od urodzenia uplynelo: " << roznica / 365 << " lat, " << (roznica % 365) / 30 << " miesiecy, " << (roznica % 365) % 30 << " dni." << endl << endl;
}
