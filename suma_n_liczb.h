#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	unsigned int i = 0, suma = 0, n;
	cout << "ilosc liczb=";
	cin >> n;
	licz:
	suma +=i;
	if(i==n)
		goto koniec;
	else
	{
		i++;
		goto licz;
	}
	koniec:
	cout << "Suma" << n << "-kolejnych liczb naturalnych wynosi: "<< suma << endl;
	system ("PAUSE");
	return EXIT_SUCCESS;
}