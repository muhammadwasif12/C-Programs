
using namespace std;

//there are two types of header files:
//System header files: It comes with the compiler.For example:
#include<iostream>
//User defined header files: It is written by the programmer.For example:
//#include<wasif.h> " this will produce error if wasif.h is not present in current directory."
int main()
{
    int a=4,b=5;
cout<<"Operators in C++"<<endl;
cout<<"There are followin types of Operators in C++"<<endl;
// Arithmatic Operators
cout<<"the value of a+b is " << a+b<<endl;
cout<<"the value of a-b is " << a-b<<endl;
cout<<"the value of a*b is " << a*b<<endl;
cout<<"the value of a/b is " << a/b<<endl;
cout<<"the value of a%b is " << a%b<<endl;
cout<<"the value of a++ is " << a++<<endl;
cout<<"the value of a-- is " << a--<<endl;
cout<<"the value of ++a is " << ++a<<endl;
cout<<"the value of --a is " << --a<<endl;
cout<<endl;

//Assignment Operator
// int a=2;b=3;
//char c ='d';

//Comparison OPerator
cout<<"the value of a==b is " << (a==b)<<endl;
cout<<"the value of a!=b is " << (a!=b)<<endl;
cout<<"the value of a>b is "<< (a>b)<<endl;
cout<<"the value of a<b is " << (a<b)<<endl;
cout<<"the value of a<=b is " << (a!=b)<<endl;
cout<<"the value of a>=b is " << (a!=b)<<endl;
cout<<endl;

//logical OPerator
cout<<"the following are the values of logical operator"<<endl;
cout<<"the value of (a==b) && (a<b) logical and operator is " <<((a==b) && (a<b)) <<endl;
cout<<"the value of (a==b) || (a<b) logical or operator is " << ((a==b) || (a<b))<<endl;
cout<<"the value of this not (!(a==b)) logical operator is  "<< (!(a==b))<<endl;





    return 0;

}