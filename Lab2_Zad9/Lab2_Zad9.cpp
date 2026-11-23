#include <iostream> 
using namespace std;

int main()
{
    double n = 6, iloczyn = 1;
    // cout << "Podaj liczbe n: ";
    // cin >> n;

    if (n < 1) {
        cout << "Liczba musi byc wieksza od 0" << endl << endl;
        return -1;
    }

    for (double r = 0; r < n; r++) { //zrobic na 2 petlach
        for (double k = 0; k < r + 1; k++) {
            if (k == 0 || k == r) {
                iloczyn = 1.0;
                cout << iloczyn << " ";
            } else {
                for (double i = 0; i < k; i++) {
                    iloczyn = (iloczyn * (r - (k - 1.0)))/((k - 1.0) + 1.0);
                }
                cout << iloczyn << " ";
            }
        }
        cout << endl;
    }
}