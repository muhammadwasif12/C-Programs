#include<iostream>
using namespace std;

class simple{
int Data1;
int Data2;
int Data3;
public:
simple (int a,int b,int c){
//  Data1=100;
    Data1=455;
    Data2=200000;         //we also use constructor with default arduments.
    Data3=40000;
}
void PrintData(){
    cout<<"The value of Data1,Data2 and Data3 is: "<<Data1<<" , "<<Data2<<" and "<<Data3<<endl;
}

};
int main(){

simple s(3,4,6);
s.PrintData();



    return 0;
}