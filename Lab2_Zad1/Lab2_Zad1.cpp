#include <iostream> //fixed
#include <iomanip> //setprecision
#include <cmath> //sqrt
using namespace std;

int main() {
    double a = 0, b = 0, c = 0, delta = 0;
    cout << setprecision(2) << fixed;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    cout << "******************************************************" << endl;

    if (a == 0) {
        cout << "'a' nie moze sie rownac 0" << endl << endl;
        return -1;
    }

    cout << "Funkcja kwadratowa: f(x) = ";
    if (a == 1) {
        cout << "x^2 ";
    }
    else if (a == -1) {
        cout << "-x^2 ";
    }
    else {
        cout << a << "x^2 ";
    }

    if (b == 1) {
        cout << "x ";
    }
    else if (b == -1) {
        cout << "-x ";
    }
    else {
        if (b > 0) {
            cout << "+ " << b << "x ";
        }
        else if (b < 0) {
            cout << b << "x ";
        }
    }

    if (c > 0) {
        cout << "+ ";
        cout << c;
    }
    else if (c < 0) {
        cout << c;
    }

    cout << endl << "******************************************************" << endl << endl;
    delta = b*b - (4*a*c); 

    if (delta < 0) {
        cout << "Funkcja nie posiada miejsc zerowych." << endl << endl;
    }
    else if (delta == 0) {
        cout << "Funkcja posiada jedno miejsce zerowe, x1 = " << -b/(2*a) << endl << endl;
    }
    else {
        cout << "Funkcja posiada dwa miejsca zerowe, x1 = " <<  (-b -sqrt(delta))/(2*a) << ", x2 = " << (-b +sqrt(delta))/(2*a) << endl << endl;
    }
}