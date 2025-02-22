#include<iostream>
using namespace std;

class Point {
int x;
int y;
public:
Point (int a,int b);
void Displaypoint(void){
    cout<<"Your point is: "<<"("<<x<<","<<y<<")"<<endl;
}
};
Point ::Point (int a,int b){
x=a;
y=b;
}

int main(){
    Point p1(2,3);
   p1.Displaypoint();

    Point p2(5,6);
   p2.Displaypoint();

    return 0;
}