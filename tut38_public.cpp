#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default by default and is not inheritable.
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}

class derived : public Base
{ // class is being derived publically.
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "The value of data1 is: " << getdata1() << endl;
    cout << "The value of data2 is: " << data2 << endl;
    cout << "The value of data3 is: " << data3 << endl;
}
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}