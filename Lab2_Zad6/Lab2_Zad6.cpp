#include <iostream> 
using namespace std;

/* co najmniej 41 punktów na 100 możliwych oraz co najmniej 40% punktów z każdej grupy
zadań weryfikujących założone efekty uczenia się.

W ramach przedmiotu student może uzyskać maksymalnie 100 punktów:
- 50 pkt. – dwa kolokwia praktyczne z programowania (2 × 25 pkt.),
- 20 pkt. – egzamin obejmujący zagadnienia przedstawione podczas wykładów,
- 20 pkt. – indywidualne zadanie projektowe polegające na samodzielnym opracowaniu i implementacji programu w języku C++,
- 10 pkt. – aktywność podczas zajęć, w tym rozwiązywanie dodatkowych zadań programistycznych lub przygotowanie referatu.

Ocena końcowa ustalana jest na podstawie łącznej liczby uzyskanych punktów według następujących progów:
- 0–40 pkt. – 2,0,
- 41–60 pkt. – 3,0,
- 61–70 pkt. – 3,5,
- 71–80 pkt. – 4,0,
- 81–90 pkt. – 4,5,
- 91–100 pkt. – 5,0.
*/

int main()
{
    int kolos1 = 0, kolos2 = 0, egzamin = 0, projekt = 0, aktywnosc = 0, suma = 0;
    bool zaliczenie = true;
    cout << "Podaj liczbe punktow z kolokwium 1: ";
    cin >> kolos1;
    cout << "Podaj liczbe punktow z kolokwium 2: ";
    cin >> kolos2;
    cout << "Podaj liczbe punktow z egzaminu: ";
    cin >> egzamin;
    cout << "Podaj liczbe punktow z projektu: ";
    cin >> projekt;
    cout << "Podaj liczbe punktow z aktywnosci: ";
    cin >> aktywnosc;

    suma = kolos1 + kolos2 + egzamin + projekt + aktywnosc;
    cout << "\nLaczna liczba punktow: " << suma << endl;

    if (kolos1 < 10) {
        cout << "Nie udalo Ci sie uzyskac zaliczenia z kolokwium 1" << endl;
        zaliczenie = false;
    } 
    if (kolos2 < 10) {
        cout << "Nie udalo Ci sie uzyskac zaliczenia z kolokwium 2" << endl;
        zaliczenie = false;
    }
    if (egzamin < 8) {
        cout << "Nie udalo Ci sie uzyskac zaliczenia z egzaminu" << endl;
        zaliczenie = false;
    }
    if (projekt < 8) {
        cout << "Nie udalo Ci sie uzyskac zaliczenia z projektu" << endl;
        zaliczenie = false;
    }
    if (aktywnosc < 4) {
        cout << "Nie udalo Ci sie uzyskac zaliczenia z aktywnosci" << endl;
        zaliczenie = false;
    }
    
    if (zaliczenie == true) {
        if (suma > 0 && suma <= 40) {
            cout << "Nie udalo Ci sie uzyskac zaliczenia, ilosc punktow: " << suma << endl;
        } else if (suma >= 41 && suma <= 60) {
            cout << "Gratulacje udalo Ci sie uzyskac: 3,0" << endl;
        } else if (suma >= 61 && suma <= 70) {
            cout << "Gratulacje udalo Ci sie uzyskac: 3,5" << endl;
        } else if (suma >= 71 && suma <= 80) {
            cout << "Gratulacje udalo Ci sie uzyskac: 4,0" << endl;
        } else if (suma >= 81 && suma <= 90) {
            cout << "Gratulacje udalo Ci sie uzyskac: 4,5" << endl;
        } else if (suma >= 91) {
            cout << "Gratulacje udalo Ci sie uzyskac: 5,0" << endl;
        } else {
            cout << "Nie udalo Ci sie uzyskac zaliczenia" << endl;
        }
    }

    cout << endl;
}