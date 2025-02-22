#include<iostream>
using namespace std;

class Base1{
public:
void say(){
    cout<<"How are you"<<endl;
}
};
class Base2{
public:
void say(){
    cout<<"Kaise ho"<<endl;
}
};
class derived:public Base1,public Base2{
int a;
public:
void harry(){
Base1::say();
Base2::say();
}
};

class B{
public:
void say(){
cout<<"Hello wasif"<<endl;
}
};
class Dm:public B{    //class Dm new say method will override base class
//say method .
public:
void say(){
cout<<"Hello Janu"<<endl;
}
};

int main(){
//********Ambibuity 1:-
/*Base1 b1;
b1.say();
Base2 b2;
b2.say();
*/
//derived d;
//d.say();// this will shows error bcz compiler confuse in run same 
//function so we use this function in derived class by making another
//fuction. 

//derived d;     correct 
//d.harry();

//********Ambibuity 2:-
B obj;
obj.say();

Dm der;   //automatic resolve ambibuity .
der.say();

    return 0;
}