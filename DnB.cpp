#include <iostream>
using namespace std;

int main()
{
    int liczba = 0;
    cout << "podaj liczbe";
    cin >> liczba;
    int tab[31];
    int i = 0;

    while (liczba != 0) {
        tab[i++] = liczba%2;
        liczba = liczba/2;
    }
    for (int j = i - 1; j >= 0; j--) {

        cout << tab[j];

    }


}
