using namespace std;
#include <iostream>

int main()
{
	int n = 0, l = 0;

	do
	{
		cout << "Inserisci n: " << endl;
		cin >> n;
	} while (n < 0);
	int e = 0;
	cout << "Inserisci e: " << endl;
	cin >> e;

	if (n!=1)
	{
		bool f = 1;

		for (int c = 0; c <= n; c++)
		{
			cout << "Inserisci numero: ";
			cin >> l;
			if (l> e)
			{
				e = l;
			}
			else {
				f = 0;
				c = c + 1;
			}
		}
		if (f == 1) {
			cout << "Crescente!";

		}
		else
		{
			cout << "NO!";
		}
	}
	
}
