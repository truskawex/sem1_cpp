#include <iostream> //fixed
#include <iomanip> //setprecision
using namespace std;

int main() {
    double a = 0, b = 0;
    cout << setprecision(3) << fixed;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    if (b != 0) cout << a << " / " << b << " = " << a / b << endl;
    cout << "Srednia z " << a << " i " << b << " to " << (a + b) / 2 << endl << endl;
}