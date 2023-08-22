// bitwise opeator
 
#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cout << "Enter your input\n";
    cin >> a >> b;
    cout << "ANSWERE OF BITWISE OPERATOR\n";
    cout << "AND IS " << (a & b) << endl;
    cout << "OR IS " << (a | b) << endl;
    cout << "XOR IS " << (a ^ b) << endl;
    cout << "not IS " << ~a << endl;
}

// left shift operator and right shift operator

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    a = 17;
    b = 19;
    c = 21;

    cout << "left shift one  time" << (a >> 1)<<endl;
    cout << "left shift two  time" << (a >> 2)<<endl;

    cout << "Right shift one  time" << (b << 1)<<endl;
    cout << "Right shift two  time" << (c << 2)<<endl;
}

//increment or decrement operators

#include<iostream>
using namespace std;
int main(){

    int a;
    cout << "Enter your input\n";
    cin >> a ;
cout<<"pre increment "<<++a<<endl;  
cout<<"post increment "<<a++<<endl;
cout<<a<<endl;
cout<<"pre decrement "<<--a<<endl;  
cout<<"post decrement "<<a--<<endl;
cout<<a<<endl;

}