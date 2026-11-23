#include <iostream> 
using namespace std;

int main()
{
    int n = 0, suma = 0;
    cout << "Podaj liczbe n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba musi byc wieksza od 0" << endl << endl;
        return -1;
    }

    cout << "\nDzielniki wlasciwe:\n";
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            cout << i << " ";
            suma += i; 
        }
    }

    cout << "\n\nSuma dzielnikow wlasciwych: " << suma << endl << endl;

    if (suma == n) {
        cout << n << " jest liczba doskonala\n\n";
    } else {
        cout << n << " nie jest liczba doskonala\n\n";
    }
}