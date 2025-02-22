#include<iostream>
using namespace std;
int main()
{
// 6 table using for loop:
/*
{
for(int i=1;(i<=10);i++)
{
    cout<<i*6<<endl;
}*/

// table made by using do whlie loop:
int i =1;
do 
{
cout<<i*2<<endl;
i++;
}
while(i<=10);
    return 0;
}