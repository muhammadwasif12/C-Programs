#include<iostream>
using namespace std;
/*
Case 1:
Class B:public A{
 //Order of exexcution of constructor--->First A() Then ---> B().   
}
Case 2:
Class C:public A,public B{
//Order of execution of constructor--->First A() then --> B() and --->C().
}
Case 3:
Class C:public B,public A{
//Order of execution of constructor --->First B() then --->A() and --->C().
} 
Case 4:
class C:public A,virtual public B{
    //Order of execution of construtor --->First B() then A() and ---->C().
}
Case 5:
class C:virtual public A,virtual public B{
    //Order of execution of construtor --->First A() then B() and ---->C().
}
*/
class Base1{
int Data1;
public:
Base1(int x){
    Data1=x;
    cout<<"Base1 constructor called"<<endl;
}
void printBase1(){
    cout<<"The value of Data1 is: "<<Data1<<endl;
}
};

class Base2{
int Data2;
public:
Base2(int y){
    Data2=y;
    cout<<"Base2 constructor called"<<endl;
}
void printBase2(){
    cout<<"The value of Data2 is: "<<Data2<<endl;
}
};

class Derived:public Base1,virtual public Base2{
int Data3,Data4;
public:
Derived( int a,int b,int c,int d):Base1(a),Base2(b){
Data3=c;
Data4=d;
cout<<"Derived class constructor called "<<endl;
}
void printDerived(){
cout<<"The value of Data3 is: "<<Data3<<endl;
cout<<"The value of Data4 is: "<<Data4<<endl;
}
};

int main(){
Derived haris(2,3,4,5);
haris.printBase1();
haris.printBase2();
haris.printDerived();

    return 0;
}