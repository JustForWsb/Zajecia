#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int tablica[6];
    int n;
    for (int i = 0; i < 6; i++)
    {
        cout << "Podaj liczbe" << endl;
        cin >> n;
        tablica[i] = n;
    }
    cout << "\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "Element tablicy na pozycji " << i << " ma wartosc " << tablica[i] << endl;
    }
    system ("pause");
    return 0;
}
