#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
	int tabsize;
	int data;
	int maximum = 0;
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
	cout << "Najwiekszy element tablicy ma wartosc " <<  endl;
    for (int i = 0; i < tabsize; i++)
    {
		if (tablica[i] > maximum)
			maximum = tablica[i];
    }
	cout << maximum << endl;
}
