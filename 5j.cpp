#include<iostream>
using namespace std;
int main()
{
    int n=00000000000000000000000000001011;
    //cout<<"Enter number in form of binary \n";
    //cin>>n;
    int count=0;
    
    while (n!=0)
    {
     
        if (n & 1)
        {
            count=count+1;
          
        }
        n=n>>1;
        
    }
cout<<count;
    
}