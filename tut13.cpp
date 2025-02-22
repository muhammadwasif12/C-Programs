#include<iostream>
using namespace std;

int main(){
    //*********Array Examples*********
    int marks[]={22,33,44,55};    //first method of write an array.
    int Mathmarks[4];              /*second method*/
     Mathmarks[0]=99;
     Mathmarks[1]=88;
     Mathmarks[2]=77;
     Mathmarks[3]=66;
     
cout<<"These are Mathmarks: "<<endl;
    cout<<Mathmarks[0]<<endl;
    cout<<Mathmarks[1]<<endl;
    cout<<Mathmarks[2]<<endl;
    cout<<Mathmarks[3]<<endl;
    
cout<<"These are marks: "<<endl;
marks[2]=24;       //You can change the value of any ARRAY.
    /*cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;*/

//*******By using Loops******
/*for (int i = 0; i < 4; i++)
{
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
}*/

// quiz: 
int i=0;
while (i<4)
{
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;
}
cout<<endl;
//*************Pointers and Array************
int* p=marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

/*cout<<"The value of *p is "<<*p<<endl;
cout<<"The value of *p+1  is "<<*(p+1)<<endl;
cout<<"The value of *p+2  is "<<*(p+2)<<endl;
cout<<"The value of *p+3  is "<<*(p+3)<<endl;
*/
    return 0;
}