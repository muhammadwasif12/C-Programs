#include<iostream>
using namespace std;

int main(){
    //Basic Example:
    int a =4;
    int* ptr=&a;
*ptr=999;
cout<<"The value of a is: "<<*(ptr)<<endl;

//New Operator/keyword:
//int* p=new int(400);
float* p=new float(56.9);
//delete p;
cout<<"The value at address p is: "<<*p<<endl;


int* arr=new int[3];
arr[0]=122;         //1method:      //2method:
*(arr+1)=344;       //arr[1]=344;   //*(arr+1)=344;
arr[2]=233;
//delete[] arr;

cout<<"The value of arr[0] is: "<<arr[0]<<endl;
cout<<"The value of arr[1] is: "<<arr[1]<<endl;
cout<<"The value of arr[2] is: "<<arr[2]<<endl;

//Delete operator:

   return 0;
}