/* making patter i/p=3 so
o/p is 111
       222
       333
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter input\n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

/* making patter i/p=3 so
o/p is ***
       ***
       ***
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your input\n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}