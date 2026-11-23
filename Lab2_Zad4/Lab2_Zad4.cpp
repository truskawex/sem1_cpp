#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Podaj liczbe: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba musi byc wieksza od 0" << endl << endl;
        return -1;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}