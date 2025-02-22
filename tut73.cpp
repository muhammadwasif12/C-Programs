#include<iostream>
#include<map>
#include<string>
using namespace std;

//Use of Map in Associative Array(Associative Container):

void display(map <string,int> &Marks){
Marks.insert({{"Ali",77},{"Kaif",99}}); //Use insert function
    map<string,int> ::iterator iter;
    for (iter= Marks.begin(); iter!=Marks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;//Maping first element of marksMap
        // by using first function and second element map with first element by using second 
        //function.  
    }
}

int main(){
    map <string,int> marksMap;
    marksMap["Wasif"]=98;
    marksMap["Haris"]=66;
    marksMap["Khizer"]=45;

   /* marksMap.insert({{"Ali",77},{"Kaif",99}}); //Use insert function
    map<string,int> ::iterator iter;
    for (iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;//Maping first element of marksMap
        // by using first function and second element map with first element by using second 
        //function.  
    }
    cout<<endl;
*/
   display(marksMap);


    return 0;
}