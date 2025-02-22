#include<iostream>
using namespace std;

//forward declaration:
class complex;

class calculator{
    public:
int add(int a,int b){
return (a+b);}
int sumrealcomplex(complex ,complex); 
int sumimgcomplex(complex ,complex); 

};

class complex{
    int a;
    int b;
    //Individually declaring functions as Friend:
    //friend  int calculator::sumrealcomplex(complex obj1,complex obj2);
    //friend  int calculator::sumimgcomplex(complex obj1,complex obj2);
    //***2nd method:****
    //Declaring the entire class calculator as Friend:
    //which means any function of calculator class access private data of complex class.i.e:
    friend calculator;
    public: 
    void setnumber(int n1,int n2){
    a=n1;
    b=n2;
    }
    void Printnumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

int calculator:: sumrealcomplex(complex obj1,complex obj2){
return (obj1.a +obj2.a);
}
int calculator:: sumimgcomplex(complex obj1,complex obj2){
return (obj1.b +obj2.b);

}
int main(){
    complex obj1,obj2;
    obj1.setnumber(3,4);
    obj1.Printnumber();

    obj2.setnumber(4,4);
    obj2.Printnumber();

    calculator calc;
    int res = calc.sumrealcomplex (obj1,obj2);
    int result  = calc.sumimgcomplex (obj1,obj2);
    cout<<"The sum of real part of obj1 and ob2 is: "<<res<<endl;
    cout<<"The sum of imaginary part of obj1 and ob2 is: "<<result<<endl;
    return 0;
}