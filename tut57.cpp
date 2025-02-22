#include<iostream>
using namespace std;

class CWH{
protected:
string title;
float ratings;
public:
CWH(string s, float r){
    title=s;
    ratings=r;
}
//virtual void display(){cout<<"Bad code"<<endl;}
virtual void display(){}
};

class CWHvideo:public CWH{
float videolength;
public:
CWHvideo(string s, float r,float vl):CWH(s,r){
videolength=vl;
}
void display(){
    cout<<"The Title of the video is: "<<title<<endl;
    cout<<"The Length of the video is: "<<videolength<<" minutes"<<endl;
    cout<<"Ratings:"<<ratings<<" out of 5 stars"<<endl;
}
};

class CWHtext:public CWH{
int words;
public:
CWHtext(string s, float r,int ws):CWH(s,r){
    words=ws;
}
void display(){
 cout<<"The Title of the Text is: "<<title<<endl;
    cout<<"The Total words of text is: "<<words<<endl;
    cout<<"Ratings:"<<ratings<<" out of 5 stars"<<endl;
}
};
int main(){
  string title;
  float ratings;
  float videolength;
  int words;

//CWHvideo Form:
title="Jungle";
ratings=4.89;
videolength=30;
CWHvideo djvideo(title,ratings,videolength);
//djvideo.display();
cout<<endl;

//CWHtext Form:
title="Gaming";
ratings=3.9;
words=340;
CWHtext djtext(title,ratings,words);
//djtext.display();

//By pointers:
CWH* dance[2];
dance[0]=&djvideo;
dance[1]=&djtext;
dance[0]->display();
cout<<endl;
dance[1]->display();

    return 0;
}
/*
//Rules for Virtual Function:
1. They cannot be static.
2. They are accessed by the object pointers.
3. Virtual Functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class , there is no neccessity redefineing it in 
derived class.
*/