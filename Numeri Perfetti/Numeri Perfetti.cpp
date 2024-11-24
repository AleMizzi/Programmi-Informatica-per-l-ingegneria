using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    int n = 0;

	do
	{
		cout << "Inserisci il numero:" << endl;
		cin >> n;
	} while (n < 2);

	int s = 1;

	for (int i = 2; i <= round(n/2); i++)
	{
		if ((n%i) == 0)
		{
			s = s + 1;
		}
	}

	if (s == n)
	{
		cout << "Il numero inserito è perfetto!";
	}
	else {
		cout << "Il numero inserito non è perfetto!";
	}
}

