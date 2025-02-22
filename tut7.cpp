#include<iostream>
using namespace std;
//int c =4;
int main()
{
    //****************Build in Data Types******************

//int a , b ,c;
//cout<<"Enter the value of a : "<<endl;
//cin>>a;
//cout<<"Enter the value of b : "<<endl;
//cin>>b;
//c=a+b;
//cout<<"The sum is: "<<c<<endl;
//cout<<"The global c is "<<::c;


//*************Float,Double and Long literals******************
//float d =34.4f;
//long double e=34.4l;
//cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
//cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
//cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
//cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
//cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
//cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;


//*************Refference variables**********
//for example: ali----->sher----->dangerous coder
//float x=45;
//float & y=x;
//cout<<x<<endl;
//cout<<y<<endl;


//************Type Casting************
int a =45;
float b =45.5;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of a is "<<float(a)<<endl;

cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;

int c= int (b);

cout<<"The value is "<<a+(int)b<<endl;
cout<<"The value is "<<a+b<<endl;
cout<<"The value  is "<<a+(float)b<<endl;

    return 0;


}