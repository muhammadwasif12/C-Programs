//Create a Function which takes 2 point objects and computes the distance
//between those points.//formula: 
#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x;
    int y;
    public:
    friend void distance (point obj1,point obj2);
    point (int a,int b);
    void Display(){
    cout<<"The point is: "<<"("<<x<<","<<y<<")"<<endl;
    }
};
point :: point (int a,int b){
    x=a;
    y=b;
    
}
void distance(point obj1,point obj2){
    float distance;
cout<<sqrt(pow(obj2.x-obj1.x,2)+(obj2.y-obj1.y,2))<<endl;

}


int main(){
    point p1(2,3);
    p1.Display();

    point p2(0,1);
    p2.Display();

    distance(p1,p2);

    return 0;
}