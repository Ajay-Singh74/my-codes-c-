//let assume input=234         ans;; product -sum;
//product=2*3*4      sum=2+3+4

#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Input\n";
    cin>>n;
    int prod = 1;
    int sum = 0;

    while (n != 0)
    {
        int digit;

        digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n =n/ 10;
    }

    cout << "Answere is " << prod - sum;
}