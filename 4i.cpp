/*

    A A A
    B B B
    C C C

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
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch<<" ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}