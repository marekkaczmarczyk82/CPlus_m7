#include <iostream>
using namespace std;

	int main()
	{
		int t[4010];

			for( int i = 0; i < 4000; i++ )
			{
				t[i] = 100 * i;
			}
			cout << "TAB t : \n";

				for( int i = 0; i < 4000; i++ )
				{
					cout << "Element nr : " << i << " ma wartosc : " << t[i] << endl;
				}

	}
