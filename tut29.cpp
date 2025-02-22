#include<iostream>
using namespace std;

class complex{
int a,b;
public:
//*******Creating a Constructor:******
//Constructor is a special member function with the same name as of the class.
//It is used to intialize the objects of its class.
//It is automatically invoked whenever an object is created 

complex (void);    //Constructor Declaration.

void printnumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<" i "<<endl;
}

};
complex ::complex(void)  //This is a Default constructor as it tajkes no parameter.
{
    a =7;
    b =4;
   // cout<<"Hello world"<<endl;
}

int main(){
 complex c1,c2,c3;
 c1.printnumber();
 c2.printnumber();
 c3.printnumber();

    return 0;
}
//Characteristics of Constructor:
/*
1. It should be declare in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot have return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.
*/ 



