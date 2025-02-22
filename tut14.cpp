#include<iostream>
using namespace std;

//Struct:
 typedef  struct Employee
{
    int eId;
    char Favchar;
    float salary;

} ep;

//union:
   union money
   {
    int rice;    //4 
    char car;    //1        union memory share krta ha.
    float pound;   //4bit
   };

//enum:
    enum Meal{breakfast , lunch , dinner};
    
int main()
{
    //***********STRUCT***********
    
    //struct Employee Ali;       //usage of typedef no need to write full struct emp.
   /*  ep Ali;
     ep Haris;
     ep Khizer;
    Ali.eId=1;
     Ali.salary=120000;
     Ali.Favchar='a';
     Haris.eId =2;
     Khizer.salary=300000;
   /*cout<<"The value is "<<Ali.eId<<endl;
   cout<<"The value is "<<Ali.salary<<endl;
   cout<<"The value is "<<Ali.Favchar<<endl;
   */
  // cout<<"The value is "<<Haris.eId<<endl;
  // cout<<"The value is "<<Khizer.salary<<endl;

 //*********Union**********
 /*
union money m1;
m1.rice=34;
m1.car='v';
// union me sirf aik hi value use kr sakte ho.
cout<<m1.car<<endl;
*/

//*************Enum**************
Meal m1=breakfast;
//cout<<breakfast<<endl;
//cout<<lunch<<endl;
//cout<<dinner<<endl;
//cout<<m1<<endl;
cout<<(m1==0);

    return 0;
}