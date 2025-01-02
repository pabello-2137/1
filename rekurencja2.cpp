using namespace std;
#include <iostream>

int GetNumberFromUser(){
    cout << "podaj liczbe:\n";
    int podana = 0;
    cin >> podana;
    return podana;
}

int CalculateSumRecursive(int numerek){
    int i = 0;
    int wynik = 0;
    do {
        wynik = wynik + i;
        i++;
    } while (i <= numerek);
    return wynik;
}

void DisplayResult(int wynik){
    cout << wynik;
}


int main()
{
    int numerek = GetNumberFromUser();
    int wynik = CalculateSumRecursive(numerek);
    DisplayResult(wynik);
}