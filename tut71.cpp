#include <iostream>
#include <vector>
using namespace std;

//There are three Types of Container:
//Sequence Container //-->Vector  or List.
//Associative Container//-->Maps.
//Dervied Container

// using STL and vector:

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<< " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create an vector:

     vector <int> vec1;     //zero length integer vector.

        int element,size;    //size means how many blank spaces formed in vector(container).
        cout<<"Enter the size of vector: "<<endl;
        cin>>size;

    for (int i = 0; i <size; i++)
        {
            cout<<"Enter the element add to this vector: "<<endl;
        cin>>element;
        vec1.push_back(element);    //by push back all total element displays.
        }
        //vec1.pop_back();  //by pop back last element erase.
        display(vec1);

      vector<int>::iterator iter=vec1.begin();   //using insert function to display any element in
      //any position of vector and in multiple times.
       vec1.insert(iter+1,5,444);
        display(vec1);
    
    /* vector <char> vec2(4);     //4-element integeral vector.
     vec2.push_back('W');
     vector <char> vec3(vec2);    //4-element integeral vector from vec2.
  */ vector<int> vec4(6, 3); // 6-element vectors of 3s. //it means 6 times 3 display hoga.
    vector<int>::iterator itor = vec4.begin();
    vec4.insert(itor + 1, 10, 78);
    display(vec4);
    cout << vec4.size();

    return 0;
}