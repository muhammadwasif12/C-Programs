#include<iostream>
using namespace std;
//Made class template and using default parameters:

//template<class T1,class T2,class T3>
template<class T1=int,class T2=float,class T3=char>//we also gives dirct values and also pass classes 
//in the place of data types.
class harry{
public:
T1 a;
T2 b;
T3 c;
harry(T1 x,T2 y,T3 z){
    a=x;
    b=y;
    c=z;
}
void display(){
cout<<"The value of a is: "<<a<<endl;
cout<<"The value of b is: "<<b<<endl;
cout<<"The value of c is: "<<c<<endl;
}
};

int main(){
 harry <int ,int ,int>h(2,3,4); //in this way we explain data type after made template.
h.display();

cout<<endl;

harry<>g(2,3.3,'G');  //in this way we explain default data type in template.
g.display();

    return 0;
}