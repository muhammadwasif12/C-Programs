#include<iostream>
using namespace std;
/*
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
*/
//********Function Prototype**************
//syntax:
//Type function name (arguments);
int sum(int a,int b);    //Acceptable       
//int sum(int,int);        //Acceptable

void w(void);              //acceptable
//void w();              //acceptable
int main(){
int num1,num2;
cout<<"Enter the num 1: "<<endl;
cin>>num1;
cout<<"Enter the num 2: "<<endl;
cin>>num2;
cout<<"The sum is: "<<sum(num1,num2)<<endl;
//num1 and num2 are Actual Parameter.
w();
  return 0;
}
int sum(int a,int b)
// Formal parameter a and b will be taking values from actual parameters num1 and 
//num2
{
    int c=a+b;
    return c;
}
void w()
{
    cout<<"Hello Good Morning "<<endl;
}
  

