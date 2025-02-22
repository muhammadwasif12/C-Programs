#include<iostream>
using namespace std;

class A{
int a;
public://Use of this pointer: if same variables occurs in setdatafunction.
//void setData(int a){
A &setData(int a){
    //a=a;  //this will create an garbage value.
   this->a=a;  //True
//if we want to return an object that point to member function:
   return *this;

}
void getData(){
    cout<<"The value of a is: "<<a<<endl;
}
};
//'This'  is a keyword which is a pointer which points to the object 
//which invokes the member function. 
int main(){
A a;
a.setData(4);
a.setData(4).getData();//by using this pointer we return an object to member function.
a.getData();           //so we dont need to explain function individually by adding objects. 


    return 0;
}