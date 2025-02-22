#include<iostream>
using namespace std;

//************Function Overloading***********
int sum(int a, int b){
    cout<<"Using Function with two arguments "<<endl;
return a+b;
}
int sum(int a, int b, int c){           // int ki jagah float etc use hosakte ha differently
       cout<<"Using Function with three arguments "<<endl;
return a+b+c;
}

// Calculate the volume of Cylinder:
int volume(double r,int h){
    return (3.14 *r*r *h);

}
// Calculate the volume of cube:
int volume( int a){
    return (a*a*a);

}
// Calculate the volume of Rectangular box:
int volume( int l,int b,int w){
    return (l*b*w);
}
int main(){
    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3,4 and 1 is "<<sum(3,4,1)<<endl;
cout<<endl;

    cout<<"The volume of cylinder radius 3 and height 4 is "<<volume(3,4)<<endl;
    cout<<"The volume of cuboid  of side 3 is "<<volume(3)<<endl;
    cout<<"The volume of rectangular box of 3,4 and 1 is "<<volume(3,4,1)<<endl;
    return 0;
}