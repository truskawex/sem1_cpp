#include <iostream>
#include <iomanip> //setw
using namespace std;

int main() {
    int dzielnik = 0, przedzialDol = 0, przedzialGora = 0;

    cout << "Podaj dzielnik: ";
    cin >> dzielnik;
    cout << "Podaj przedzial dol: ";
    cin >> przedzialDol;
    cout << "Podaj przedzial gora: ";
    cin >> przedzialGora;

    if (przedzialGora < przedzialDol) {
        cout << "Przedzial gora nie moze byc mniejszy od przedzialu dol";
        return -1;
    }

    if (dzielnik == 0) {
        cout << "Dzielnik nie moze byc zerem";
        return -1;
    }

    for (int i = przedzialDol; i <= przedzialGora; i++) {
        if (i % 10 == 0) cout << setw(5) << endl << i / 10 << ")";
        if (i % dzielnik == 0) cout << setw(5) << i;
    }

    cout << endl << endl;
}