#include <iostream>
#include <random> //random
using namespace std;

int main()
{
	int uzytkownik = 0, komputer = 0;

	mt19937 generator(time(nullptr));
	uniform_int_distribution <int> distribution(0, 100);
	komputer = distribution(generator);

	while (uzytkownik != komputer) {
		cout << "Zgadnij liczbe: ";
		cin >> uzytkownik;

		if (uzytkownik < komputer) {
			cout << "Twoja liczba jest mniejsza niz wylosowana.\n" << endl;
		}
		else if (uzytkownik > komputer) {
			cout << "Twoja liczba jest wieksza niz wylosowana.\n" << endl;
		}
		else {
			cout << "Gratulacje! Zgadles liczbe!\n" << endl;
		}
	}
}