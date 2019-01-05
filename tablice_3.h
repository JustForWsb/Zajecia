#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
    int tablica[5] = {1, 2, 5, 8, 9};
	cout << "Parzyste elementy " <<  endl;
    for (int i = 0; i < 5; i++)
    {
		if (tablica[i]%2 == 0)
		cout << "Element "<< i << " o wartosci " << tablica[i] << endl;
    }
	
    cout << "\n";
	
	cout << "Nieparzyste elementy " <<  endl;
    for (int i = 0; i < 5; i++)
    {
		if (tablica[i]%2 != 0)
		cout << "Element "<< i << " o wartosci " << tablica[i] << endl;
    }
    system ("pause");
    return 0;
}
