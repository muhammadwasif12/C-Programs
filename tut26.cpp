#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
 //Below lines means non member -sumcomplex function is allowed to do anything
 //with my private parts(data).    
    friend complex sumcomplex(complex obj1,complex obj2);
    void sumcomplex(){}
    void setnumber(int n1,int n2){
    a=n1;
    b=n2;
    }
    void Printnumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};
complex sumcomplex (complex obj1,complex obj2){   //Friend funtion use.
    complex obj3;
    obj3.setnumber((obj1.a+obj2.a),(obj1.b+obj2.b));
    return obj3;
}


int main(){
 complex c1,c2,sum;
 c1.setnumber(1,2);
 c1.Printnumber();   

 c2.setnumber(2,3);
 c2.Printnumber();

sum =sumcomplex(c1,c2);
sum.Printnumber();
    return 0;
}
//*****Properties of friend function:******
/*
1. Not in the scope of class.
2. since it is not in the scope of the class , it cannot be called from the 
object of that class.forexample: c1.sumcomplex(); is invalid.
3.Can be invoked without the help of any object.
4. Usually contains the object as argument.
5. Can be declared inside  public or private section of the class.
6. It cannot access the members drectly by their names and need object
name.member_name to access any member.  
*/