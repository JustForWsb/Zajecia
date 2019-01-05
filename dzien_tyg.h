#include <iostream>

using namespace std;


    main ()
	{
		int		i;
		cout << "Podaj nr dnia tygodnia: " << endl; 
		cin >> i;
		switch(i)
		{
		case 1:
			cout << "Roboczy" << endl; 
			break;
		case 2:
			cout << "Roboczy" << endl; 
			break;
		case 3:
			cout << "Roboczy" << endl; 
			break;
		case 4:
			cout << "Roboczy" << endl; 
			break;
		case 5:
			cout << "Roboczy" << endl; 
			break;
		case 6:
			cout << "Wekeend" << endl; 
			break;
		case 7:
			cout << "Wekeend" << endl; 
			break;	
		default:
			cout << "Nie wiem nic o takim dniu." << endl; 
			break;
		}
	}