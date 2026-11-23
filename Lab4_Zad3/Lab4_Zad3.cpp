#include <iostream>
using namespace std;

bool czyPierwsza(int n) {
	if (n <= 1) {
		return false;
	}
	else {
		for (int i = 2; i <= n / 2; i++) { //n/2 - optymalizacja - sprawdza tylko dzielniki od 2 do n/2
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}

int main()
{
	for (int i = 0; i < 100; i++) {
		if (czyPierwsza(i) == true) cout << i << " ";
	}
}