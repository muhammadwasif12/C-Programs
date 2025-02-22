#include<iostream>
using namespace std;

class employee{
int id ;
int salary;
public:
void setId(void){
    salary=1200;
    cout<<"Enter the Id: "<<endl;
    cin>>id;
}
void getId(void){
    cout<<"The Id of the employee is: "<<id<<endl;
}



};


int main(){
    
//employee harry,Ali,wasif;
//harry.setId();
//harry.getId();
 employee companyname[4];
 for (int i = 0; i < 4; i++)
 {
companyname[i].setId();
companyname[i].getId();
    
 }
    return 0;
}