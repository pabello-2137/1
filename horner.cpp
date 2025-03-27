#include<iostream>
using namespace std;

int horner(int wsp[], int st, int x) {
    if (st == 0) {
        return wsp[0];
    }

        return x * horner(wsp, st - 1, x) + wsp[st];


}



int main()
{

    int st = 0;
    int x = 0;
    int* wspolczynnik;




    cout << "podaj stopien";
    cin >> st;
    wspolczynnik = new int[st + 1];

    for (int i = 0; i <= st; i++) {
        cout << "wprowadź współczynnik";
        cin >> wspolczynnik[i];



    }
    
    cout << "podaj argument";
    cin >> x;


    cout << horner(wspolczynnik, st, x);


}