using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int n;
    bool f = 1;
    vector <double> v;
    int h = 1;
    
    do
    {
        cout << "Inserisci la dimensione del vettore: " << endl;
        cin >> n;
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        double x = 0;
        cout << "Inserisci l'elemento del vettore: ";
        cin >> x;
        v.push_back(x);
    }

    while (h <= (n-1) && f == 1 )
    {
        if (v[h] < v[h-1])
        {
            h = h + 1;
        }
        else
        {
            f = 0;
        }
    }

    if (f == 0)
    {
        cout << "Non e Crescente!" << endl;
    }
    else 
    {
        cout << "Crescente!" << endl;
    }
    
}

