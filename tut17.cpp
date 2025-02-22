#include<iostream>
using namespace std;

//*********use of inline***********
  inline int product(int a,int b){
    //Not recommened to use inline function with static variable.
  //  static int c=0;        //This execute only once.
  //  c=c+1;                //Next time this function is run,  the value of c will be retained.
    return a*b;
}

//**************use of default arguments************
int moneyrecieved (int currentmoney, float factor=1.04){     //default arguments always written in left side.

return currentmoney*factor;
}

//***********Constant arguments**************
// int strlen(const char *p){
//constant argument me string or variable change nhi hoga.
// }

int main(){
    //int a,b;
    //cout<<"Enter the value of a and b is "<<endl;
    //cin>>a>>b;
   // cout<<"The product of a and b is: "<<product(a,b)<<endl;
   int money=100000;
cout<<"If u have "<<money<<"Rs in your bank account, you will receive "<<moneyrecieved(money)<<"Rs after one year"<<endl;
cout<<" FOR VIP : If u have "<<money<<"Rs in your bank account, you will receive "<<moneyrecieved(money,1.1)<<"Rs after one year"<<endl;

    return 0;
}