#include <iostream>

using namespace std;


int    main ()
	{
		int	n;
		cout << "Ile chcesz liczb naturalnych milordzie?" << endl; 
		cin >> n;
		cout << "Twoje poczatkowe liczby naturalne:" << endl; 
		for (int x = 1; x < n+1  ; x++)
		{
			cout << x << endl;
		}
	}