/*
       1 
       2 3
       4 5 6
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER YOUR INPUT:\n";
    cin >> n;
    int i = 1;
    int value = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}