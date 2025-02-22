#include<iostream>
using namespace std;

//virtual base class is used in this program bcz ambibuity occur in this 
//program if we not used virtual base class.
//Example of Heirarchical inheritance:

class Student{
protected:
int rollnumber;
public:
void set_rollnumber(int a){
rollnumber=a;
}
void printrollnumber(void){
cout<<"Your Roll Number is: "<<rollnumber<<endl;
}
};

class Test:virtual public Student{
protected:
int phy;
int math;
public:
void set_marks(float m1,float m2){
phy=m1;
math=m2;
}
void print_marks(){
cout<<"Your Result is here: "<<endl;
cout<<"The Marks in physics are: "<<phy<<endl;
cout<<"The Marks in math are: "<<math<<endl;
}
};

class Sports:virtual public Student{
protected:
float score;
public:
void set_score(int x){
score =x;
}
void print_score(void){
cout<<"Your PT scores are: "<<score<<endl;
}
};

class Result:public Test,public Sports{
private:
int Result;
public:
void Displayresult(){
printrollnumber();
print_marks();
print_score();
cout<<"Your Total Marks is: "<<phy+math+score<<endl;
}
};

int main(){
Result haris;
haris.set_rollnumber(22);    
haris.set_marks(77.6,90.8);    
haris.set_score(9);
haris.Displayresult();    
    return 0;
}