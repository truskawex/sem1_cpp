#include <iostream> //fixed
#include <iomanip> //setprecision
using namespace std;

int main() {
    double a = 0, b = 0, step = 0;
    int n = 0;
    cout << setprecision(1) << fixed;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj n: ";
    cin >> n;

    if (b < a) {
        cout << "b nie moze byc mniejsze od a" << endl << endl;
        return -1;
    }

    if (n <= 1) {
        cout << "n nie moze byc mniejsze lub rowne 1" << endl << endl;
        return -1;
    }

    step = (b - a) / n;
    for (int i = 0; i <= n; i++) {
        cout << a + i * step << " ";    
    }
    cout << endl << endl;
}