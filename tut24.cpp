#include<iostream>
using namespace std;

class employee{
    int id ;
     static int count;
    public:
    void setdata(void){
        cout<<"Enter the Id: "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of this employee is: "<<id<< "and this is the employee no. "<<
        count<<endl;
    }
    static void getcount(void){
        //cout<<id;  //throws an error bcz static function only access other static
        //variables or function.
        cout<<"The value of count is: "<<count<<endl;
    }

};
//count is the static data number of class employee.
int employee::count;  //default value is zero.

int main(){
employee harry,wasif,Ali;
//harry.id=1;
//harry.count=1;   //cannot do this bcz id and count is private.
harry.setdata();
harry.getdata();
employee::getcount();

wasif.setdata();
wasif.getdata();
employee::getcount();

Ali.setdata();
Ali.getdata();
employee::getcount();

    return 0;
}