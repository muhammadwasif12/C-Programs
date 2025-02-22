#include<iostream>
using namespace std;

class c2;

 class c1{
int value1;
friend void ExchangeData(c1 &x,c2 &y);
public:
void inData(int a){
    value1=a;
}
void DisplayData(){
    cout<<value1<<endl;
}
 };

  class c2{
int value2;
friend void ExchangeData(c1 &x,c2 &y);
public:
void inData(int b){
    value2=b;
}
void DisplayData(){
    cout<<value2<<endl;
}
 };

void ExchangeData(c1 & x,c2 & y){
int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main(){
class c1 oc1;
class c2 oc2;

oc1.inData(4);
oc2.inData(7);

 ExchangeData(oc1, oc2);

cout<<"The value of c1 after exchanging is: "<<endl;
oc1.DisplayData();

cout<<"The value of c2 after exchanging is: "<<endl;
oc2.DisplayData();

    return 0;
}