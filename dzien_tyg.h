#include <iostream>

using namespace std;


int main ()
	{
		int	i;
		cout << "Podaj nr dnia tygodnia: " << endl; 
		cin >> i;
		switch(i)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "Roboczy" << endl; 
			break;
		case 6:
		case 7:
			cout << "Wekeend" << endl; 
			break;
		default:
			cout << "Nie wiem nic o takim dniu." << endl; 
			break;
		}
	}
