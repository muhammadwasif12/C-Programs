#include<iostream>
using namespace std; 

class Base{
protected:
int a ;        //if we want variable a private and also inherit so we use protected .
private:
int b;
};

/*
For a Protected member:
                        public derivation       private derivation      protected derivation
1.private members         not inherited         not inherited           not inherited
2.public members           public                  private               protected
3.protected members        protected               private               protected
*/

class derived:protected Base{

};
int main(){
  Base b;
  derived d;
  //cout<<b.a;  //Will not work since a is protected in both base as well as derived class.
    return 0;
}