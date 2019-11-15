#include <iostream>
using namespace std;

void zadanie()
{   int rozmiar;
    cout << "Podaj rozmiar: ";
    cin >> rozmiar;
    double tablica[rozmiar];
    for(int i=0; i<rozmiar; i++)
    {
        cout << "Podaj element nr " << i+1 << ": ";
        cin >> tablica[i];
    }
    cout << "Tablica!";
    cout << endl;
    for(int i=0; i<rozmiar; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
    cout << "Tablica po odwroceniu!";
    cout << endl;
    for(int i=0; i<rozmiar; i++)
    {
        tablica[i] = rozmiar - i;
        cout << tablica[i] << " ";
    }

}
int main()
{   zadanie();
    return 0;
}
