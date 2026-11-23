#include <iostream>
using namespace std;

int najdluzszyNiemalejacy(const int tab[], int n) {
    if (n < 1) {
        return 0;
    }

    int aktualna = 1;
    int maks = 1;

    for (int i = 0; i + 1 < n; i++) {
        if (tab[i] <= tab[i + 1]) {
            aktualna++;
            if (aktualna > maks) {
                maks = aktualna;
            }
        }
        else {
            aktualna = 1;
        }
    }

    return maks;
}

int main() {
    const int tablica[] = { 4, 4, 6, 2, 3, 3, 5, 1 };
    int n = sizeof(tablica) / sizeof(tablica[0]);

    cout << najdluzszyNiemalejacy(tablica, n) << endl;
}