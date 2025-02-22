#include<iostream>
using namespace std;

class Baseclass{
public:
int var_base;
void display(){
    cout<<"Displaying Base class variable var_base is: "<<var_base<<endl;
} 
};

class Derivedclass : public Baseclass{
public:
int var_derived;
void display(){
    cout<<"Displaying Base class variable var_base is: "<<var_base<<endl;
    cout<<"Displaying derived class variable var_derived is: "<<var_derived<<endl;
} 
};


int main(){
    //if pointer pointing base class to derived class object than only run base class 
    //display function is called late binding or run time polymorphisim.
Baseclass *base_class_pointer;
Baseclass obj_baseclass;
Derivedclass obj_derivedclass;
base_class_pointer=& obj_derivedclass;//Pointing base class pointer to derived class.
base_class_pointer->var_base=34;
base_class_pointer->display();

//base_class_pointer->var_derived=34;  //Will throw an error.

base_class_pointer->var_base=34000;
base_class_pointer->display();

//if pointer pointing derived class to derived class object than definately run derived 
//class display function.
Derivedclass *derived_class_pointer;
derived_class_pointer=&obj_derivedclass;
derived_class_pointer->var_base=660;
derived_class_pointer->var_derived=4000;
derived_class_pointer->display();

    return 0;
}