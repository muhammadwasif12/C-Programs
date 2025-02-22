#include <iostream>
using namespace std;

// Example of Multilevel Inheritance:
class Student
{
protected:
    int rollnumber;

public:
    void setrollnumber(int);
    void getrollnumber();
};
void Student::setrollnumber(int r)
{
    rollnumber = r;
}
void Student::getrollnumber(void)
{
    cout << "Your Roll number is: " << rollnumber << endl;
}

class Exam : public Student
{
protected:
    float physics;
    float math;
    float english;

public:
    void setmarks(float, float, float);
    void getmarks();
};
void Exam::setmarks(float m1, float m2, float m3)
{
    physics = m1;
    math = m2;
    english = m3;
}
void Exam::getmarks(void)
{
    getrollnumber();
    cout << "The Marks Obtained in Physics are: " << physics << endl;
    cout << "The Marks Obtained in Mathematics are: " << math << endl;
    cout << "The Marks Obtained in English are: " << english << endl;
}

class result : public Exam
{
    float Percentage;

public:
    void TotalMarks(int);
    void ObtainedMarks()
    {
        cout << "The Total Obtained Marks are: " << physics + math + english << endl;
    }
    void DisplayPercentage()
    {
        cout << "Your Percenatge is: " << (physics + english + math) / 3 << "%" << endl;
    }
};
void result::TotalMarks(int)
{
    int TotalMarks = 300;
    cout << "The Total Marks are: " << TotalMarks << endl;
}

int main()
{
    result wasif, haris;
    wasif.setrollnumber(63);
    wasif.setmarks(90.5, 88.0, 70.0);
    wasif.getmarks();
    wasif.TotalMarks(300);
    wasif.ObtainedMarks();
    wasif.DisplayPercentage();
    cout << endl;
    cout << endl;
    haris.setrollnumber(70);
    haris.setmarks(66.5, 77.0, 89.0);
    haris.getmarks();
    haris.TotalMarks(300);
    haris.ObtainedMarks();
    haris.DisplayPercentage();

    return 0;
}
/*Notes:  
If we are inheriting B from A and C from B:[ A-->B-->C--]
1. A is the base class for B and B is the base class for C.
2. A-->B-->C Inheritance Path.
*/