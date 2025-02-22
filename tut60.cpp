#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream---->Derived from fstrambase
3. ofstream----->Derived from fstreambase.
*/
//In order work with files in C++, You will have to open it.Primarily,
//There are two ways to open a file:
//1. Using the Constructor
//2. Using the member Function open() of the class.
int main(){
    //Openeing file using constructor and give input to file(program---to---file) it:
    string st1="Muhammad Wasif and i am from okara also i have interest in coding\nI want to become a app developer";
    string st2="I also want to serve people when i become a rich man";
ofstream giveinput("Sample60a.txt");
giveinput<<st1;                      ///Write OPeration.
giveinput<<st2;
  
    //Openeing file using constructor and take output from file(file---to---program) it:
string harry;
ifstream giveoutput("Sample60b.txt");
giveoutput>>harry;                       ///Read Operation.
cout<<harry;
getline(giveoutput,harry);
cout<<harry;
getline(giveoutput,harry);
cout<<harry;

    return 0;
}