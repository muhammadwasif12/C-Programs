#include<iostream>
using namespace std;

/*
float averagefunc1(int a,int b){
float avg=(a+b)/2.0;
return avg;
}

float averagefunc2(int a,float b){
float avg=(a+b)/2.0;
return avg;
}
*/
//use of template in Functions:
template<class T1,class T2>
float averagefunc(T1 a,T2 b){
float avg=(a+b)/2.0;
return avg;
}

//using template and swap two numers:
template<class T>
void __swapp(T&a,T&b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
 float c;
 c=averagefunc(2,5);//we just given values in every data type.
 cout<<"The average of these number: "<<c<<endl;
   
 int x=5,y=7;
 __swapp(x,y); 
  cout<<"The value of x is: "<<x<<endl;
  cout<<"The value of y is: "<<y<<endl;

   return 0;
}