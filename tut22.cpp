// OOPS--:Classes and Objects.
// C++ -->Initially called--:C with classes by Stroustrop.
// Class-->Extension of Structure (in C).
// Structures had Limitation :
// Members are public and no methods.

// Classes--> Structures + More
// Classes --> Can have methods and properties.
// Classes --> Can make few members as public and few as private.
// Structure in C++ are typedefed.
// you can declare objects along with the class declaration Like this:
/*  Class Employee{
    Class defination
} Wasif,khizer,Ali;
*/
// Wasif.salary= 3000;    //it makes no sense if salary is private

// Nesting of member Function.

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin();

public:
    void read(void);
 //   void chk_bin();
    void ones_compliment();
    void displays();
};

void binary :: read(){
    cout<<"Enter the binary number: "<<endl;
    cin>>s;
}

void binary::chk_bin(){
for (int i = 0; i < s.length(); i++)
{
    if((s.at(i)!='0') && (s.at(i)!='1'))
    {
    cout<<"This is incorrect binary format. "<<endl;
    exit(0);
    }
}

}
void binary::ones_compliment()
{
   chk_bin();    
    for (int i = 0; i <s.length(); i++)
    {
        if (s.at(i)=='0'){
            (s.at(i)='1');
        }
        else
        (s.at(i)='0');
    }
    cout<<endl;
}
void binary::displays()
{
cout <<"Display your binary Number: "<<endl;
for (int i = 0; i < s.length(); i++)
{
cout<<s.at(i);

}

}

int main()
{
binary b;
b.read();
//b.chk_bin();              //this fuction is private so it only use by developer not by public but they still run inside call other function.
b.ones_compliment();
b.displays();

    return 0;
}