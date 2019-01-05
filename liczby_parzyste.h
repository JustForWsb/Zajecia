#include <iostream>

using namespace std;


int    main ()
	{
		int	n;
		cout << "Ile chcesz liczb parzystych milordzie?" << endl; 
		cin >> n;
		cout << "Twoje liczby:" << endl; 
		for (int x = 2; x/2 < n+1  ; x+= 2)
		{
			cout << x << endl;
		}
	}