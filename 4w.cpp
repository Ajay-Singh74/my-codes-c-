// dabang pattern

/*  
       1 2 3 4 5 5 4 3 2 1
       1 2 3 4 * * 4 3 2 1
       1 2 3 * * * * 3 2 1
       1 2 * * * * * * 2 1
       1 * * * * * * * * 1 
*/  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER YOUR INPUT:\n";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int t1=1;
        while (t1<=n-i+1)
        {
            cout<<t1<<" ";
            t1=t1+1;
        }
        
        int t2=i-1;
        while (t2)
        {
            cout<<"*"<<" ";
            t2=t2-1;
        }
    
         int t3=i-1;
        while (t3)
        {
            cout<<"*"<<" ";
            t3=t3-1;
        }
        int t4=n-i+1;
   

        while (t4>=1)
        {
            cout<<t4<<" ";
           
            t4=t4-1;
        }
        
 cout<<endl;
        i=i+1;
        
    }
    
}