// prime or not

#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime=1;
    cout<<"Enter your inut \n";
    cin>>n;
    for (int i = 2; i <n; i++)
    {
        if (n % i==0)
        {
          //  cout<<"Not prime\n";
            isPrime=0;
            break;
        }
 
        
    }
    if (isPrime==0)
    {
        cout<<"Not prime\n";
    }
    else
    {
        cout<<"prime\n";
    }
    
    
    
}