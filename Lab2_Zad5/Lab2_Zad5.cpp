#include <iostream>
#include <iomanip> //setw
using namespace std;

int main()
{
    cout << " * |";
    for (int i = 1; i <= 10; i++) {
        cout << setw(5) << i;
    }

    cout << endl << "------------------------------------------------------" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << setw(2) << i << " |";
        for (int j = 1; j <= 10; j++) {
            cout << setw(5) << i * j;
        }
        cout << endl;
    }
    cout << endl << endl;
}