#include <iostream>
using namespace std;

int funkcja(int x) {
    int l = 1;
    int p = 15;
    int sr = (l + p) / 2;
    int tab[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int szukana = x;
    if (szukana < l || szukana > p) {
    	return -1;
	}
	while (l != p && szukana >= tab[l] && szukana <= tab[p]) {
        if(tab[sr] == szukana) {
			sr = p;
			return sr;
        } else if(tab[sr] > szukana) {
            p = sr;
            sr = (l + p) / 2;
        } else {
            l = sr;
            sr = (l + p) / 2;
        }
    } 
}

int main() {
	int y;
	cin >> y;

    cout << funkcja(y);
}
