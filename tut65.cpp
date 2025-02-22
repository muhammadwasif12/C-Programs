#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERS(ONE OR TWO MORE THAN....)
template<class T1,class T2....>  //(comma seperated)
class nameofclass{
//Body of class.
};
*/

template <class T1,class T2>
class Myclass{
public:
T1 Data1;
T2 Data2;
Myclass(T1 a,T2 b){
    Data1=a;
    Data2=b;
}
void display(){
   // cout<<"The sum is: "<<Data1+Data2<<endl;
    cout<<this->Data1<<endl<<this->Data2<<endl;
}
};
int main(){
  Myclass <char ,float>obj('G',55.5);
 obj.display(); 
    return 0;
}