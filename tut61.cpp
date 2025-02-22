#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
//program to file(write operation):

string st1;     //creating a string st1 and filling it with the string entering by user.
ofstream object1("Sample60a.txt");      //connecting our file with object1 stream.
cout<<"Enter your Name: ";
cin>>st1;    
//getline(object1,st1);//displays error bcz function overloading.
object1<<st1<<" is my Name ";   //writing a string to file bcz getline function no run.
object1.close();       //close function is used to create no link b/w file and program.
 
 string st2;
 ifstream object2("Sample60a.txt");
 object2>>st2;
 cout<<st2;
 getline(object2,st2);

 cout<<st2;
 getline(object2,st2);

 object2.close();

    return 0;
}