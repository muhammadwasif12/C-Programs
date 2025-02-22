#include<iostream>
#include<functional>
#include<list>
#include<algorithm>
using namespace std;
//Function Objects(Functor): Function wrapped in a class so that it avialable 
//like an object.
int main(){
int arr[]={33,11,55,88,23,78};
//sort(arr,arr+6);   //Ascending sort 
sort(arr,arr+6,greater<int>());   //descending sort//greater is an function object. 
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<endl;
}
    return 0;
}