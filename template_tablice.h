#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int tablica[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << "Element na pozycji " << i << " ma wartosc " << tablica[i] << endl;
    }
    
    cout << "\n";
    
    int tablica2[5];
    tablica2[0] = 5;
    tablica2[1] = 15;
    tablica2[2] = 25;
    tablica2[3] = 35;
    tablica2[4] = 45;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element drugiej tablicy na pozycji " << i << " ma wartosc " << tablica2[i] << endl;
    }
}