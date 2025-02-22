#include<iostream>
using namespace std;

//Function overloading using templates:
template <class T>
class harry{
public:
T data;
harry(T a){
data =a;
}
void display();
};

template<class T>
void harry<T> :: display(){//we also define function outside class using ::and templates.
cout<<"The given data is: "<<data<<endl;
}

//Function overloading:-
//simple method:
void func(int a){
cout<<"This is simple func()= "<<a<<endl;
}

//by template:
template <class T>
void func(T a){
cout<<"This is template func()= "<<a<<endl;
}

template <class T>
void func1(T a){
cout<<"This is temp func1()= "<<a<<endl;
}

int main(){
 /*harry <int>h (78);
 harry <float>f(78.8);
 harry <char>c('W');
//cout<<"The data is: "<<h.data<<endl;
h.display();
c.display();
f.display();*/

func(56);//Exact match takes the high priority.so it calls the simple func.
cout<<endl;
func(44.4);//in this situation 44.4 not exactly match with simple func so it calls template func. 
cout<<endl;
func1("Wasif\n");//in this situation seprately made func1 that displays every data type data by 
//using templates.
func1(99);

    return 0;
}