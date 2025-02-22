#include<iostream>
using namespace std;

int main(){
    //*************Pointer: 
    // Data type which holds the address of other data types.
    int a=3;
    int* b=&a;
//  (&) Address of Operator:   
cout<<"The Address of a is "<<b<<endl;
cout<<"The Address of a is "<<&a<<endl;

//  (*) value at Dereference Operator:
cout<<"The value at Address b is "<<*b<<endl;
cout<<endl;

// Pointer to Pointer:
//  (&) Address of Operator:  
int ** c=&b;
cout<<" The Address of b is "<<c<<endl;
cout<<" The Address of b is "<<&b<<endl;

//  (*) value at Dereference Operator:
cout<<" The  value at Address c is "<<*c<<endl;
cout<<" The  value at Address value at (value at c) is "<<**c<<endl;

    return 0;
}