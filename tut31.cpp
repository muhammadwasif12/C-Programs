#include<iostream>
using namespace std;
//*********Function overloading in constructor:********

class complex{
int x;
int y;
public:
complex(int a,int b){
//    x=a;
    x=100;
    y=b;

}
complex(int a){     //multiple constructor used in one class
 //run by matching argument.
    x=a;
    y=0;
}

complex(){           //we also use constructor with default arguments.
    x=15;
    y=10;
}



void printnumber(){
        cout<<"Your complex number is "<<x<<" + "<<y<<" i "<<endl;
}
} ;

int main(){
    complex c1(2,3);
    c1.printnumber();


    complex c2(4);
    c2.printnumber();

    complex c3;
    c3.printnumber();
      
    return 0;
}