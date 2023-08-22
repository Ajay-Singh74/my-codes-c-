// decimal to binarry -ive number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter the in put \n";
    cin>>n;  

    for (int i = 31; i>=0; i--  )
    {
        int bit =(n>>i)&1;
        cout<<bit;
    }
    cout<<endl;
    
    }
    

