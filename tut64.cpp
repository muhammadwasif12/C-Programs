#include <iostream>
using namespace std;
// Using Template: it is used to replace specific data type with custom data type
// in this way we could not made seprate classes for each data type.

template <class T>
class vector
{
public:
    T *arr; // replace int with T.
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.3;
    v1.arr[1] = 3.6;
    v1.arr[2] = 2.7;

    vector<float> v2(3);
    v2.arr[0] = 2.1;
    v2.arr[1] = 1.0;
    v2.arr[2] = 0.6;

    float a = v1.dotproduct(v2);
    cout << "The dotproduct is: " << a << endl;

    return 0;
}