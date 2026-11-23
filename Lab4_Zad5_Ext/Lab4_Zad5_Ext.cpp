#include <iostream>
#include <iomanip>
#include "funkcje.h"
using namespace std;

int main()
{
    int waluta = 1;
    double ilosc = 0.0;
    cout << fixed << setprecision(2);

    //ileMogeKupic(); //"ileMogeKupic": funkcja nie przyjmuje 0 argumentów

    while (waluta != 0) {
        cout << "Podaj walute: 1 - EUR, 2 - USD, 3 - NOK, 0 - zakonczenie programu: ";
        cin >> waluta;

        if (waluta > 0 && waluta <= 3) {
            cout << "\nPodaj ilosc PLN: ";
            cin >> ilosc;
        }

        if (ilosc < 0) {
            cout << "Niepoprawna kwota\n\n";
        }
        else {
            switch (waluta)
            {
            case 0:
                return 0;
            case 1:
                cout << endl << ilosc << "PLN = " << przelicz(ilosc, EUR) << "EUR" << endl << endl;
                break;
            case 2:
                cout << endl << ilosc << "PLN = " << przelicz(ilosc, USD) << "USD" << endl << endl;
                break;
            case 3:
                cout << endl << ilosc << "PLN = " << przelicz(ilosc, NOK) << "NOK" << endl << endl;
                break;
            default:
                cout << "Bledny wybor\n";
                break;
            }
        }
    }
}