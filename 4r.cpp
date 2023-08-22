/*
       1 1 1 1
         2 2 2
           3 3
             4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER YOUR INPUT:\n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " "
                 << " ";
            space = space - 1;
        }
        int j =1;
        while (j <= n-i+1)
        {
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}