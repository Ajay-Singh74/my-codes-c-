// operator some basic

#include <iostream>
using namespace std;
int main()
{
    int a, b, rem, sum, minus, multyplay;
    a = 5;
    b = 3;
    rem = a % b;
    sum = a + b;
    minus = a - b;
    multyplay = a * b;
    cout << "reminder is " << rem << endl;
    cout << "addition is " << sum << endl;
    cout << "substraiction is " << minus << endl;

    // division
    float c, d, div;
    c = 12;
    d = 5;
    div = c / d;
    cout << "division is " << div << endl;
    //   float/int=float
    // double/int=double

    // relation operator by using a and b
    int y, z;
    y = 23;
    z = 45;
    bool first = y == z;
    cout << first << endl;

    bool second = y != z;
    cout << second << endl;

    bool third = y <= z;
    cout << third << endl;

    bool fourth = y >= z;
    cout << fourth << endl;
    // logical operator
    cout << a << endl;
    cout << !a << endl;
}