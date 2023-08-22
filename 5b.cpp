// normal out put 1


#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 1;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }
}

//normal out put 2
#include<iostream>
using namespace std;
int main(){
    int a=1,b=2;
    if (a-->0&&++b>2)
    {
        cout<<"STAGE 1-INSIDE IF";
    }
    else
    {
        cout<<"STAGE 2-INSIDE ELSE";
    }
    
}
//normal out put 3

#include<iostream>
using namespace std;
int main(){
    int number=3;
    cout<<(25*(++number));
     
}


//normal out put 4

#include<iostream>
using namespace std;
int main(){
    int a=0,b=2;
    if (a-->0 || ++b>2)
    {
        cout<<"STAGE 1-INSIDE IF";
    }
    else
    {
        cout<<"STAGE 2-INSIDE ELSE";
    }
    
}



//normal out put 5
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=a++;
    int c=++a;
    cout<<b<<endl;
    cout<<c;
}