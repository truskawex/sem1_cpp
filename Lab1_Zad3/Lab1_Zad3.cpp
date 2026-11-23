#include <iostream> //fixed
#include <iomanip> //setprecision
using namespace std;

int main() {
    double xA = 0, yA = 0, xB = 0, yB = 0;
    cout << setprecision(2) << fixed;

    cout << "Podaj xA: ";
    cin >> xA;
    cout << "Podaj yA: ";
    cin >> yA;
    cout << "Podaj xB: ";
    cin >> xB;
    cout << "Podaj yB: ";
    cin >> yB;

    cout << endl;

    if (xA == xB) {
        cout << "xA nie moze rownac sie xB" << endl << endl;
        return -1;
    }

    double a = (yB - yA) / (xB - xA);
    double b = yA - (a * xA);
    cout << "Rownanie prostej: y = ";
    if (a == 1) {
        cout << "x ";

    } else if (a == -1) {
        cout << "-x ";

    } else {
        cout << a << "x ";
    }

    if (b > 0) {
        cout << "+ ";
        cout << b;
    
    } else if (b < 0) {
        cout << b;
    }

    cout << endl << endl;
}