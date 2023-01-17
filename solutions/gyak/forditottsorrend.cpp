#include <iostream>
#define N 5
using namespace std;

int main(void){
    int szamok[N] = {0};
    int i = 0;

    cout << "Adjon meg " << N << "db szamot, hogy kiirassa forditott sorrendben." << endl;
    while (i < N) { cin >> szamok[i]; i++; }
    for (int i = N; i > 0; i--)
    {
        cout << "A(z) " << i << ". szam: " << szamok[i-1] << endl;
    }

    return 0;
}