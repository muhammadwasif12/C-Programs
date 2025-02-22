#include <iostream>
using namespace std;

class BankDeposit
{
    int principle;
    int year;
    float interestrate;
    float returnvalue;

public:
    BankDeposit() {}                    // default constructor is necessary.
    BankDeposit(int p, int y, float r); // r can be a value like 0.04.
    BankDeposit(int p, int y, int R);   // R can be a value like 14.
    void Show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    principle = p;
    year = y;
    interestrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

BankDeposit::BankDeposit(int p, int y, int R)
{
    principle = p;
    year = y;
    interestrate = float(R) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void BankDeposit::Show()
{
    cout << endl
         << "Principle amount was " << principle << endl
         << "Return value after years " << year << endl
         << " is " << returnvalue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p;
    int y;
    int R;
    float r;

    cout << "Enter the value of p,y and r: " << endl;
    cin >> p >> y >> r;
    // BankDeposit :- // agar default constructor nhi bnaia tho
    // ham class name ko as a data type use kare ge .
    bd1 = BankDeposit(p, y, r);
    bd1.Show(); 

    cout << "Enter the value of p,y and R: " << endl;
    cin >> p >> y >> R;
    // BankDeposit
    bd2 = BankDeposit(p, y, R);
    bd2.Show();
    
    return 0;
}