/*
       D
       C D
       B c D
       A B C D
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
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {

            cout << ch << " ";
            ch = ch + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}