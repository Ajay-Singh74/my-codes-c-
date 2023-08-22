// print data type and size of it
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "the value of a is " << a << endl;
    int size = sizeof(a);
    cout << "the size of intiger is " << size << endl;

    char b = 'c';
    cout << "the letter is " << b << endl;
    int charsize = sizeof(b);
    cout << "the size of character is " << charsize << endl;

    bool c = true;
    cout << "it is " << c << endl;
    int boolsize = sizeof(c);
    cout << "the size of bololean is " << boolsize << endl;

    float d = 2.3;
    cout << "the value  is " << d << endl;
    int flsize = sizeof(d);
    cout << "the size of float is " << flsize << endl;

    double e = 2.335;
    cout << "the value  is " << e << endl;
    int dosize = sizeof(e);
    cout << "the size of double is " << dosize << endl;
}
