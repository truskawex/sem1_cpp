#include <iostream> 
using namespace std;

int main()
{
    int c0 = 0, input = 0;
    cout << "Podaj wartosc c0: ";
    cin >> c0;
    input = c0;
   
    if (c0 < 0) {
        cout << "Wartosc c0 nie moze byc mniejsza od 0" << endl << endl;
        return -1;
    }

    cout << c0 << " -> ";

    int i = 0;
    while (i < 1000) {
        c0 = (c0 % 2 == 0) ? c0 / 2 : c0 * 3 + 1;
        cout << c0;
        if (c0 == 1) {
            cout << "\n\nPotwierdzono hipoteze Collatza dla liczby: " << input << endl;
            cout << "\nWykonano " << i + 1 << " krokow\n\n";
            return 0; 
        }
        cout << " -> ";
        i++;
   }

   cout << "\n\nNie potwierdzono hipotezy Collatza w 1000 krokach\n\n";
}