#include<iostream>
using namespace std;

/*int sum(int a,int b){
    int c=a+b;
    return c; 
}*/
//*********This will not swap**********
 /*void swap(int a,int b){       // temp  a  b
    int temp=a;               // 4    4   5
    a=b;                    //  4    5   4
    b=temp;                   //  4    5   4
 }*/
 
 // *****Call by Reference Using Pointer:***********
 void swapPointer(int *a,int *b){       // temp  a  b
    int temp=*a;                         // 4    4   5
    *a=*b;                               //  4    5   5
    *b=temp;                               //  4   5  4
 }
 // *****Call by Reference Using C++ Refernce Variable:***********
 //int &       this is return ref variable.
 void swapReferenceVar(int &a,int &b){       // temp  a  b
    int temp=a;                           // 4    4   5
    a=b;                                  //  4    5   5
    b=temp;                                 //  4   5  4
  //  return a;        //only use when change value during swap variables.                 
 }
int main(){
    int x=4,y=5;
//cout<<"The sum of 4 and 5 is "<<sum(a,b)<<endl;
cout<<"The value of x is  "<<x<<endl<<"The value of y is "<<y<<endl;

//  swap(x,y); //this will not swap.
// cout<<"The value of x is  "<<x<<endl<<"The value of y is "<<y<<endl;

//swapPointer(&x,&y);        //this will be swap by pointer method.
//cout<<"The value of x is  "<<x<<endl<<"The value of y is "<<y<<endl;

swapReferenceVar(x,y);//=333;       // this will be swap by ref variable method.
cout<<"The value of x is  "<<x<<endl<<"The value of y is "<<y<<endl;

    return 0;                         
}