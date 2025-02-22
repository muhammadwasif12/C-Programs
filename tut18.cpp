#include<iostream>
using namespace std;

//***********Recursion**********
int Factorial(int n){
if(n<2){
    return 1;
}

    return n*(n-1);
}
int Fib(int n){
    if(n<2){
        return 1;
    }
    return Fib(n-2)+(n-1);
}
//Fib(5)
//fib(4)+fib(3)
//fib(2)+fib(3)+fib(2)+fib(3)   same function ko bar bar call krna recursive approach me tho ye overhead hojata ha tho ham 
//iterative approach use kerte han.

int main(){
    //   Factorial of a number:
    //   6!=5*4*3*2*1=720
    //   1!= 1 by defination
    //   0!= 1 by defination.
    //   n!=n*(n-1)!
int a;
cout<<"Enter the number: "<<endl;
cin>>a;
//cout<<"The Factorial of "<<a<<" is : "<<Factorial(a)<<endl;
cout<<"The term at Fibonacci sequence at position "<<a<<" is : "<<Fib(a)<<endl;

    return 0;
}