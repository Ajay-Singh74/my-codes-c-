// prime or not

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE INPUT \n";
    cin>>n;
    int st=2;
    while (st<n)
    {
        if (n%st==0)
        {
            cout<<"not prime for "<<st<<endl;
        }
        else
        {
             cout<<"prime for "<<st<<endl;
        }
        
        st=st+1;
        

    }
}