#include<iostream>
using namespace std;
/*
Syntax for Initialization List in Constructor:
construtor(Argument List):Initialization section{
    assignment + other code;
}
for example:
1 method:                                      2 method:
class Test{                                         class Test{
int a;                                               int a;
int b;                                               int b;
public:                                             public:
Test(int i,int j):a(i),b(j){                     Test(int i,int j){
                                                    a=i;
}                                                   b=j;
};                                                      }};
*/


class Test{
//int b;
//int a;
int a;
int b;
public:
//Test( int i,int j) : a(i),b(j){
//Test( int i,int j) : a(i),b(j+i){
//Test( int i,int j) : a(i),b(j+a){
//Test( int i,int j) : a(i),b(2*j)
//Test( int i,int j) : a(i),b(2*a)
//Test( int i,int j) : a(i),b(2*b)//This will create an error bcz a is initialize first.
//Test( int i,int j) : b(i),a(2*b){//It is true bcz we intialze b first.
Test( int i,int j) : a(i),b(j){
cout<<"Constructor Executed"<<endl;
cout<<"The value of a is: "<<a<<endl;
cout<<"The value of b is: "<<b<<endl;
}
};

int main(){
Test t(5,4);

    return 0;
}