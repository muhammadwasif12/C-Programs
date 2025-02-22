#include<iostream>
using namespace std;

class Y;

class X{
int a;
friend void add(X ,Y );
public: 
void setValue(int value){
    a=value;
}
    
};

class Y{
int b ;
friend void add(X ,Y );

public: 
void setValue(int value){
   b=value ;
}
    
};
void add(X obj1,Y obj2){
    cout<<"The sum of Data a and b is: "<<(obj1.a+obj2.b)<<endl;
}

int main(){
 class X c1;
 c1.setValue(2);
 
 class Y c2;
 c2.setValue(3);

add(c1,c2);

    return 0;
}