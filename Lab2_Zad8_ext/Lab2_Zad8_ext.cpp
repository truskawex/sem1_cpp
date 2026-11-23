#include <iostream> 
using namespace std;

int main()
{
    int n = 0, suma = 0;
    cout << "Podaj liczbe N: ";
    cin >> n;

    if (n <= 2) {
        cout << "Liczba musi byc wieksza od 2" << endl << endl;
        return -1;
    }

    for (int j = 2; j <= n; j++) {
        suma = 0;
        for (int i = 1; i <= j/2; i++) {
                if (j % i == 0) {
                    suma += i;
                }
            }

        if (suma == j) {
            cout << j << " ";
        }
    }

    cout << endl << endl;
}