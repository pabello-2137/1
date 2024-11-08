#include <iostream>
using namespace std;

int main()
{
	int baza;
	int wykladnik;
	int liczaca = 1
		;
	int wynik = 1;
		cout << "podaj liczbe bazową:";
		cin >> baza;
		cout << "podaj wykładnik:";
		cin >> wykladnik;


		do {
			wynik = wynik * baza;
			liczaca ++;
		} 
		while (liczaca <= wykladnik);
		cout << wynik;
}
