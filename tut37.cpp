#include<iostream>
using namespace std;

//Base Class:
class employee{
    public:
    int id;
    float salary;
    employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    employee(){}
};
//Derived class Syntax:
/*
class {{Dervied class name}}:{{visibility name}} {{base class}}
{
class members ,methods and function etc;
}
Note:
1.Default visibility mode is private.
2.public visibility mode: Public members of the base class becomes public members of the
derived class.
3.Priate visibility mode: Public members of the base class becomes private members of the
 derived class. 
4.Private members of the base class never be inherited.
*/
//creating a programmer class derived from employee base class :

class programmer:public employee{
//int languagecode;
public:
programmer(int inpId){
    id=inpId;
}
int languagecode=9;
void getdata(){
    cout<<id<<endl;
}

};
int main(){
employee harry(1),wasif(2);
cout<<harry.salary<<endl;
cout<<wasif.salary<<endl;

programmer skillf(11);
cout<<skillf.languagecode<<endl;
cout<<skillf.id<<endl;
 skillf.getdata();

    return 0;
}