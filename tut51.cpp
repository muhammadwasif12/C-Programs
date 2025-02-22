#include<iostream>
using namespace std;

class complex{
int real;
int imaginary;
public:
void getData(){
cout<<"The Real part is: "<<real<<endl;
cout<<"The imaginary part is: "<<imaginary<<endl;
}
void setdata(int a,int b){
    real=a;
    imaginary=b;
}

};

int main(){
complex c1;
//c1.setdata(2,6);
//c1.getData();
//complex *Ptr=&c1;
complex* Ptr =new complex;
//(*Ptr).setdata(3,6);//is exactly same as:
Ptr->setdata(3,6);//arrow operator=derefference operator.
//(*Ptr).getData(); //is good as:
Ptr->getData();

//Array of objects:
complex* Ptr1 =new complex[4];
Ptr1->setdata(3,6);//arrow operator=derefference operator.
Ptr1->getData();

    return 0;
}