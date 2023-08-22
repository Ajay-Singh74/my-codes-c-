/*
            1
          2 3
        4 5 6
      7 8 9 10

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER YOUR INPUT:\n";
    cin >> n;
    int i = 1;
    int num=1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " "
                 << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout <<num<<" ";
            num++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}