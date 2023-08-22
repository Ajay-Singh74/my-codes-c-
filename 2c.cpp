// type casting
#include <iostream>
#include<typeinfo>
using namespace std;
int main()
{

    int a = 'a';
    cout << "typecasting 1st is " << a << endl;
    char b = 103;
    cout << "typecasting 2nd is " << b << endl;
    char c = 119;
    cout << "typecasting 3rd is " << c << endl;
    int d = 'o';
    cout << "typecasting 4th is " << d << endl;

    float f=2.3;
    double g=33.443;
    bool e=true;
    // finding type
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(c).name()<<endl;
    cout<<typeid(d).name()<<endl;
    cout<<typeid(f).name()<<endl;
    cout<<typeid(g).name()<<endl;
    cout<<typeid(e).name()<<endl;
}