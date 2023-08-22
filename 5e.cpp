//fibonaccii series

#include<iostream>
using namespace std;
int main()
{
    int n;
  cout<<"enter your input\n";
  cin>>n;
  int a=0,b=1;
  cout<<a<<" "<<b<<" ";
  for (int i = 1; i <=n; i++)
  {
    int c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    c=a+b;
  }
  
} 


