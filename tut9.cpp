#include<iostream>
using namespace std;
int main()
{
    //*******Selection control Structure: if elseif else ladder ************************
int age;
cout<<"Tell me your age: "<<endl;
cin>>age;
//if ((age<18) && (age>1))
//{
//cout<<"No entry in party "<<endl;
//}
//else if (age>18)
//{
//    cout<<"You get entry in party "<<endl;
//}
//else if (age==18)
//{
//    cout<<" u stay for one year and try letter"<<endl;
//}
//else if (age<1)
//{
//   cout<<"You are not born yet"<<endl;
//}
//
//cout<<"i passed my selection structure program"<<endl;


//**************Selection control structure: Switch case Statement********************
switch (age)
{
case 18:
    cout<<"You are 18"<<endl;
    break;

case 22:
cout<<"Your age is 22"<<endl;
break;
case 50:
cout<<"Your age is 50"<<endl;
break;
default:
cout<<"no special case"<<endl;
    break;

}
    return 0;
}















