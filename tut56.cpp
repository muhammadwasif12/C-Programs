#include<iostream>
using namespace std;

//Use of Virtual Function: it is used when we run function that point to other object class.
class Baseclass{
public:
int var_base=2;
virtual void display(){
    cout<<"1 Displaying Base class variable var_base is: "<<var_base<<endl;
} 
};

class Derivedclass : public Baseclass{
public:
int var_derived=3;
void display(){
    cout<<"2 Displaying Base class variable var_base is: "<<var_base<<endl;
    cout<<"2 Displaying derived class variable var_derived is: "<<var_derived<<endl;
} 
};

int main(){
Baseclass *base_class_pointer;
Baseclass obj1_base;
Derivedclass obj2_derived;
base_class_pointer=& obj2_derived;
base_class_pointer->display();

}