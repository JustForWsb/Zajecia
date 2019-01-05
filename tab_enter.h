#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
	int tabsize;
	int data;
	cout << "okresl rozmiar tablicy" << endl;
	cin >> tabsize;
    int tablica[tabsize];
	cout << "teraz podaj elementy: " << endl;
	for (int i = 0; i < tabsize; i++)
    {
		cin >> data;
		tablica[i] = data;
		cout << "Next" << endl;
    }
	cout << "Parzyste elementy " <<  endl;
    for (int i = 0; i < tabsize; i++)
    {
		if (tablica[i]%2 == 0)
		cout << "Element "<< i << " o wartosci " << tablica[i] << endl;
    }
	
    cout << "\n";
	
	cout << "Nieparzyste elementy " <<  endl;
    for (int i = 0; i < tabsize; i++)
    {
		if (tablica[i]%2 != 0)
		cout << "Element "<< i << " o wartosci " << tablica[i] << endl;
    }
    system ("pause");
    return 0;
}
