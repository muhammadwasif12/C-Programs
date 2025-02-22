#include<iostream>
using namespace std;

class Shopitem{
int id;
float price;
public:
void setData(int a,int b){
    id=a;
    price=b;
}
void getData(){
    cout<<"The Id of the Item is: "<<id<<endl;
    cout<<"The price of the Item is: "<<price<<endl;
}

};

int main(){
 /*1 2 3
  ^  
  |
  |
 ptr   
 tempptr  */
     //1 method:
/*Shopitem harry;
harry.setData(3,6); 
harry.getData(); */

// simple example of pointer:
//int size=3;
//int *ptr=&size;

// 2 method:
/*Shopitem size;
Shopitem *ptr=&size;
(*ptr).setData(2,6);
(*ptr).getData();
*/
//general store item
//Veggies items
//hardware items

// 3 method:
int size=3;
int a;
float b;
//for example: int *ptr=new int[34];
Shopitem *ptr=new Shopitem[size];
Shopitem *Temptr=ptr;
for (int i = 0; i < size; i++)
{
cout<<"Enter the Id of the item"<<i+1<<":"<<endl;
cin>>a;
cout<<"Enter the price of the item"<<i+1<<":"<<endl;
cin>>b;
ptr->setData(a,b);//(*ptr).setdata(a,b); same method
ptr++;
}

for (int i = 0; i <size; i++)
{
cout<<"Item Number: "<<i+1<<endl;
Temptr->getData();
Temptr++;
}
    return 0;
}