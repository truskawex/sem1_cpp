#include <iostream> //fixed
#include <iomanip> //setprecision
using namespace std;

int main() {
    double a = 0, b = 0, c = 0, x = 0;
    cout << setprecision(2) << fixed;

    cout << "******************************************************" << endl;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    cout << "******************************************************" << endl;

    cout << "Podaj x: ";
    cin >> x;

    cout << "******************************************************" << endl;

    if (a == 0) {
        cout << "'a' nie moze sie rownac 0";
        cout << endl << endl;
        return -1;
    }

    cout << "f(x) = ";
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

    cout << endl << "******************************************************" << endl;

    cout << "f(" << x << ") = " << a * x * x + b * x + c;
    
    cout << endl << "******************************************************" << endl << endl;
}