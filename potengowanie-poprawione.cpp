#include <iostream>
using namespace std;

int main()
{
	int a;
	int n;
	cout << "podaj baze: ";
	cin >> a;
	cout << "podaj wykładnik: ";
	cin >> n;
	int w = 1;
	while (n > 0) {
		if (n % 2 == 1) {
			w = w * a;
		}
		a = a * a;
			n = n / 2;
	}
	cout << w;
}
