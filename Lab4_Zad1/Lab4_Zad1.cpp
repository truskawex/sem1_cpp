#include <iostream>
using namespace std;

int sumaCyfr(int n) {
	int suma = 0;
	while (n > 0) {
		suma += n % 10;
		n = n / 10;
	}
	return suma;
}

int main()
{
	cout << "Liczby Nivena z przedzialu [1, 1000]:\n";
	for (int i = 1; i <= 1000; i++) {
		if (i % sumaCyfr(i) == 0) cout << i << " ";
	}
	cout << endl;
}