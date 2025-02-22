#include<iostream>
using namespace std;

class complex{
    int a,b;
 //friend complex complex(int x ,int y );

public: 
 complex (int x,int y);   //Constructor declaration.

 void printnumber(){
    cout<<"Your complex number is "<<a<<" + "<<b<<" i "<<endl;
 }
};
complex ::complex(int x, int y){   //This is a Parameterized
//constructor as it accept 2 parameter.
    a=x;
    b=y;
   // cout<<"Hello World"<<endl;
}


int main(){
    //Implicit call:
    complex c1(2,3);
    c1.printnumber();

    //Explicit call:
    complex c2=complex(3,4);
   c2.printnumber();
    return 0;
}