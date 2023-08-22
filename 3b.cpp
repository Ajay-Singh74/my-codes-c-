// finding +,-,0;;; only with if

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Your input is\n";
    cin >> a;
    if (a > 0)
    {
        cout << "It is positive\n";
    }
    if (a < 0)
    {
        cout << "It is negative\n";
    }
    if (a == 0)
    {
        cout << "It is zero\n";
    }
}

// finding +,-,0;;; only with nested if else

#include <iostream>
using namespace std;
int main()
{
    int b;
    cout << "Your input is\n";
    cin >> b;
    if (b > 0)
    {
        cout << "It is positive\n";
    }
    else
    {
        if (b < 0)
        {
            cout << "It is negative\n";
        }
        else
        {
            if (b == 0)
            {
                cout << "It is a zero\n";
            }
            else
            {
                cout << "wrong input \n";
            }
        }
    }
}

//  using if-else if

#include <iostream>
using namespace std;
int main()
{
    int c;
    cout << "Enter input\n";
    cin >> c;
    if (c == 0)
    {
        cout << "this is zro";
    }
    else if (c < 0)
    {
        cout << "It is negative\n";
    }

    else if (c > 0)
    {
        cout << "It is positive\n";
    }
}