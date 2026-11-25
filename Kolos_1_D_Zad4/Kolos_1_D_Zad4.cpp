#include <iostream>
using namespace std;

void liczSasiadow(const int A[][20], int B[][20], int n, int m) {
    if (1 > n || 1 > m || n > 20 || m > 20) {
        cout << "Nieprawidlowe dane wejsciowe";
    }
    int ilosc = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == A[i + 1][j] || A[i][j] == A[i][j + 1] || A[i][j] == A[i - 1][j] || A[i][j] == A[i][j - 1]) ilosc++;
        
            cout << ilosc << " ";
        }
    }
}

int main()
{
    int n = 3, m = 3;
    int A[20][20] = {
    {1, 1, 2},
    {1, 2, 2},
    {3, 2, 2}
    };
    int B[20][20] {};

    liczSasiadow(A, B, n, m);
}