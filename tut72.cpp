#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int> ::iterator it;
    for (  it=lst.begin(); it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list <int> list1;    //zero space for stored element in list(container).
    list1.push_back(5);
    list1.push_back(3);   //pushback is used bcz there is no space for stored element in list(container).
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(10);
    display(list1);

    //Removing element from the list:
    //list1.pop_back();   
    //display(list1);
   // list1.pop_front();
    //display(list1);
   // list1.remove(3);
    //display(list1);
    
//Sorting the List:
//list1.sort();
//display(list1);

//Reversing the List:
//list1.reverse();
//display(list1);

//Display list without using void display function:
   /* list<int> ::iterator iter1; 
    iter1=list1.begin();
    cout<<*iter1++<<" ";
    cout<<*iter1++<<" ";
    cout<<*iter1++<<" ";
    cout<<*iter1++<<" ";*/

  list <int> list2(3);   //three space for stored element in list(container). 
  list<int> :: iterator iter2;
  iter2=list2.begin();
  *iter2=45;
  iter2++;
  *iter2=6;
  iter2++;
  *iter2=3;
  iter2++;
display(list2);

//merging the list:
list1.merge(list2);
list1.sort();
list2.sort();
cout<<"List1 and 2 after merging: "<<endl;
display(list1);
cout<<"List 1 and 2 after reversing: "<<endl;
list1.reverse();        //by reversing the list all elements at end return to first.
display(list1);
    return 0;
}