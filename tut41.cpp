#include<iostream>
using namespace std;

//Syntax for inheriting in multiple inheritance:
/*
class derivedc:visibilitymode,Base1,visibility mode,Base2{
    "class body of class derivedc"
};
*/
//Example of Multiple inheritance: more than one base class and only one derived class.
class Base1{
protected:
int Base1int;
public:
void set_base1int(int a){
Base1int=a;
}
};
class Base2{
protected:
int Base2int;
public:
void set_base2int(int b){
Base2int=b;
}
};
class Base3{
protected:
int Base3int;
public:
void set_base3int(int c){
Base3int=c;
}
};

class Derived : public Base1 ,public Base2,public Base3{
public:
void Show(){
cout<<"The value of Base1int is: "<<Base1int<<endl;
cout<<"The value of Base2int is: "<<Base2int<<endl;
cout<<"The value of Base3int is: "<<Base3int<<endl;
cout<<"The sum is: "<<Base1int+Base2int+Base3int<<endl;
}
};
//The inherited derived class will look something like this:
/*
Base1int--->protected
Base2int--->protected
member functions:
voidset_baseint1();---->public
voidset_baseint2();---->public
voidset_baseint3();---->public
show----->Public
*/
int main(){
Derived wasif;
wasif.set_base1int(20);
wasif.set_base2int(10);
wasif.set_base3int(10);
wasif.Show();
    return 0;
}