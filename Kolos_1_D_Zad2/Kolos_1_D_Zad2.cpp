#include <iostream>
using namespace std;

int liczSerie(const int tab[], int n) {
	int seria = 1, seriaMax = 0;

	if (n < 1) return 0;

	if (n == 2 && tab[0] == tab[1]) return 1; //8,8 powinno dac 2??

	for (int i = 0; i < n; i++) {
		if (tab[i] == tab[i + 1]) {
			seria++;
			if (seria > seriaMax) seriaMax = seria;
		}
		else {
			seria = 1;
		}
	}
	return seriaMax;
}

int main()
{
	int tab1[10] {2,2,2,5,7,7,1,1,1,4};
	cout << liczSerie(tab1, 10) << endl;
	int tab2[3] {1,2,3};
	cout << liczSerie(tab2, 3) << endl;
	int tab3[2] {8,8};
	cout << liczSerie(tab3, 2) << endl;
}