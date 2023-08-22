//printing sumof 1to n

#include <iostream>
using namespace std;
int main()
{
    int n, s, su = 0;
    s = 1;
    cout << "enter the value you want sum from 1 to n\n";
    cin >> n;
    while (s <= n)
    {
        su = su + s;

        s = s + 1;
    }
    cout << su;
}




//printing sumof all even num from 2 to n

#include <iostream>
using namespace std;
int main()
{
    int n, s, su = 0;
    s = 2;
    cout << "enter the value you want sum from 1 to n\n";
    cin >> n;
    while (s <= n)
    {
        su = su + s;

        s = s + 2;
    }
    cout << su;
}
