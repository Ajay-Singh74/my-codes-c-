#include <iostream>
/*
       1 2 3
       4 5 6
       7 8 9
*/
using namespace std;
int main()
{
    int n;
    cout << "ENTER YOUR INPUT:\n";
    cin >> n;
    int value = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << value;
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}