#include<iostream>
using namespace std;
int main()
{
    /* ******** LOOPS in C++********** */
    /* There are three types of Loops in C++ :
    1. For Loop
    2. While loop
    3. Do While loop
    */
   //**********For loop in C++************

//***Syntax for loop in C++*****
//(initialization);(condition);(updation))
//{
  //  C++ Statement;
// }

/*
// *******Example of for loop ************
for(int i=1;i<=40;i++)
{
    cout<<i<<endl;

}*/

// *************Example of infinite for loop*********

/*for(int i=1;66<=100;i++)
{
    cout<<i<<endl;
}
*/

//***************While loop*******************
/* *****Syntax of While Loop*****
while(condition)
{
    C++ Statement;
    i++;
}
*/

//*********Example of While Loop*********

/*int i=1;
while(i<=20)
{
    cout<<i<<endl;
    i++;
}*/

//*****************Do While Loop****************

//****Syntax of do while loop*****
/*
intilization;
do{
    C++ statement;
increment/decrement;
}
(condition);
*/
 
 // *****example of do while loop*****
int i=1;
do
{ 
    cout<<i<<endl;
    i++;
}
while (i<=20); 
   return 0;
}
