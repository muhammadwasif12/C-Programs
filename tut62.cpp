#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//2nd method of Reading and Write file:
//Reading and Write on file using open() fuction:
int main(){
    
    ofstream out;
    out.open("Sample60a.txt");
    out<<"Hello wold! I am a new Programmer."<<endl;
    out<<"I want to become an app developer."<<endl;
    out<<"I belive in yourself that i achieve my goal."<<endl;
    out.close();

    ifstream in;
    string st;
    in.open("Sample60a.txt");
    //in>>st;
    //cout<<st;
    while (in.eof()==0)//eof() means end of file this function used to declare end file.
    {
        cout<<st<<endl;
        getline(in,st);
    }
    in.close();
    
    return 0;
}