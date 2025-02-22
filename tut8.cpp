#include<iostream>
#include<iomanip>  //for usage of setw (manipulator) for example endl;
using namespace std;
int main()
{
 //   int a=6;
   // cout<<"The value of a is: "<<a<<endl;
  //   a =9;
  //    cout<<"The value of a is: "<<a<<endl;
   

// ***********Constants in C++***************

//const int a=10;
//cout<<"The value of a is : "<<a<<endl;
//   a=5;  // you will get an error because a is constant.
//  cout<<"The value of a is :  "<<a<<endl;

//************Manipulators in C++*************

//int a=3,b=44,c=565,d=3434;
//cout<<"The value of a is: without setw : "<<a<<endl;
//cout<<"The value of b is without setw : "<<b<<endl;      //The value of a,b,c,d is without setw
//cout<<"The value of c is without setw : "<<c<<endl;
//cout<<"The value of d is without setw : "<<d<<endl;
//cout<<endl;
//
//
//cout<<"The value of a is using setw :"<<setw(5)<<a<<endl;
//cout<<"The value of b is using setw :"<<setw(5)<<b<<endl;
//cout<<"The value of c is using setw :"<<setw(5)<<c<<endl;
//cout<<"The value of d is using setw :"<<setw(5)<<d<<endl;


//*************Operator Precedence*************

int a=2, b=4;
//     for example   int c=a*5+b;

int c=(((((a*4)-45)+66)-b)+a);

cout<<c<<endl;

    return 0;

}
