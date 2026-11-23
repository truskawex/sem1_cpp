#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "żółw";
}

/*
Krok 1: Włącz flagę /utf-8 w projekcie Visual Studio

Kliknij prawym przyciskiem myszy na nazwę projektu w Eksploratorze rozwiązań(Solution Explorer) i wybierz Właściwości(Properties).

Upewnij się, że u góry masz wybrane Konfiguracja : Wszystkie konfiguracje(All Configurations) oraz Platforma : Wszystkie platformy(All Platforms). ???

Przejdź do : Właściwości konfiguracji → C / C++ → Wiersz polecenia(Command Line).

W polu Opcje dodatkowe(Additional Options) dopisz: /utf-8

Kliknij Zastosuj i OK.
*/