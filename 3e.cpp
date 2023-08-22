// finding input is lower case,upper case or numeric

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the input you \n";
    cin >> ch;
    cout << "your output is"
         << " " << ch << endl;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "it is lower case\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "it is upper case\n";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "it is numeric\n";
    }
    else
    {
        cout<<"wrong input\n";
    }
    
}
