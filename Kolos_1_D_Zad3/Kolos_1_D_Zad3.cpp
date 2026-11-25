#include <iostream>
using namespace std;

int liczSlowaBrzegowe(const char napis[]) {
    int wynik = 0;
    int i = 0;

    while (napis[i] != '\0') {
        while (napis[i] != '\0' && napis[i] == ' ') {
            i++;
        }

        if (napis[i] == '\0') {
            break;
        }

        int start = i;

        while (napis[i] != '\0' && napis[i] != ' ') {
            i++;
        }

        int end = i - 1;

        if (napis[start] == napis[end]) {
            wynik++;
        }
    }

    return wynik;
}

int main() {
    char tab1[1025]{ "kajak kot oko ala dom" };
    char tab2[1025]{ "a b cd" };
    char tab3[1025]{ "abc def" };

    cout << liczSlowaBrzegowe(tab1) << endl;
    cout << liczSlowaBrzegowe(tab2) << endl;
    cout << liczSlowaBrzegowe(tab3) << endl;
}