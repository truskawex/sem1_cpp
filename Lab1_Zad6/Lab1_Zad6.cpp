#include <iostream>
using namespace std;

int main()
{
	int Sekundy = 0;
	cout << "Podaj liczbe sekund: ";
	cin >> Sekundy;

	cout << Sekundy << " sekund = " << Sekundy / 3600 << ":" << (Sekundy % 3600) / 60 << ":" << (Sekundy % 3600) % 60 << endl << endl;
}