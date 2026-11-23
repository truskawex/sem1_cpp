#include "funkcje.h"
#include <iostream>
#include <iomanip>
using namespace std;

void ileMogeKupic(double zlotowki = 100) {

    cout << fixed << setprecision(2);
    cout << "Za " << zlotowki << "PLN ";
    cout << "mozesz kupic: " << zlotowki / EUR << "EUR ";
    cout << "albo " << zlotowki / USD << "USD ";
    cout << "albo " << zlotowki / NOK << "NOK\n";
}

double przelicz(double pln, double kurs) {
    return pln / kurs;
}