#include <iostream>
using namespace std;

int potega(int podstawa, int wykladnik = 2) {
	int iloczyn = 1;
	
	for (int i = 0; i < wykladnik; i++) {
		iloczyn *= podstawa;
	}
	return iloczyn;
}

double potega(double podstawa, int wykladnik = 2) {
	double iloczyn = 1.0;

	for (int i = 0; i < wykladnik; i++) {
		iloczyn *= podstawa;
	}
	return iloczyn;
}

void potega(int& wynik, int podstawa, int wykladnik) {
	int iloczyn = 1;

	for (int i = 0; i < wykladnik; i++) {
		iloczyn *= podstawa;
	}
	wynik = iloczyn;
}

int main()
{
	int wynik = 0;
	cout << potega(3) << endl;
	cout << potega(3.0, 3) << endl;

	potega(wynik, 2, 5);
	cout << wynik << endl;
}