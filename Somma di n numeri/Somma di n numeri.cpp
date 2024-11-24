using namespace std;
#include <iostream>

int main()
{
	int n = 0;
	float a = 0, c = 0;

	do
	{
		cout << "Inserisci il numero totale di numeri: ";
		cin >> n;

	} while (n < 1);

	for (int i = 0; i < n ; i++)
	{
		cout << "Inserisci il numero: ";
		cin >> a;
		cout << endl;
		c = c + a;
		a = 0;
	}

	cout << "La somma è: " << c;
}
