#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;

    cout << "Podaj dlugosc a: ";
    cin >> a;
    cout << "Podaj dlugosc b: ";
    cin >> b;
    cout << "Podaj dlugosc c: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "\nDlugosci bokow trojkata musza byc wartoscia dodatnia\n" << endl;
        return -1;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "\nKazdy bok trojkata musi byc krotszy od sumy dwoch pozostalych\n" << endl;
        return -1;
    }

    double p = (a + b + c) / 2;
    double pole = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Pole trojkata: " << pole << endl << endl;
}