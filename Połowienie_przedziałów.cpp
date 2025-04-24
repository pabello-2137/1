#include<iostream>
using namespace std;

int f(double a, double b, double srodek) {
    return a * (a * (a - 3) + 2) - 6;
    return b * (b * (b - 3) + 2) - 6;
    return srodek * (srodek * (srodek - 3) + 2) - 6;
}


int main(){
    double a = -10;
    double b = 10;
    double epsilon = 0.00001;
    double srodek = 0;
        
    if (f(a) == 0.0) {
        return a;
    }
    else if(f(b) == 0.0) {
        return b;
    }
    while (a - b > epsilon) {
        srodek = (a + b) / 2;
        if (f(srodek) == 0) {
            return srodek;
        }
        else if(f(a) * f(srodek) < 0) {
            b = srodek;
        }
        else {
            a = srodek;
        }
    }
    return (a + b) / 2;
}