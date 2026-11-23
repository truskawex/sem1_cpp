#include "funkcje.h"

int nwd(int a, int b) {
	int reszta = 1;

	while (reszta > 0) {
		reszta = a % b;
		a = b;
		b = reszta;
	}

	return a;
}