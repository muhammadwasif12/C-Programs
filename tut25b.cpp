#include<iostream>
using namespace std;

class complex{
int a;
int b;
public:
void setData(int v1,int v2){
a=v1;
b=v2;
}
void setDatabysum(complex obj1,complex obj2){
    a=(obj1.a+obj2.a);
    b=(obj1.b+obj2.b);

}
void dispalycomplexnumber(void){
cout<<"The Complex Number is: "<<a<<" + "<<b<<"i"<<endl;

}
};
int main(){
complex c1,c2,c3;
c1.setData(1,2);
c1.dispalycomplexnumber();

c2.setData(3,4);
c2.dispalycomplexnumber();

c3.setDatabysum(c1,c2);
c3.dispalycomplexnumber();
    return 0;
}