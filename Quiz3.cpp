#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator {
public:
    float num1, num2;

    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void performOperations() {
        cout << "Sum: " << num1 + num2 << endl;
        cout << "Difference: " << num1 - num2 << endl;
        cout << "Product: " << num1 * num2 << endl;
        if (num2 != 0) {
            cout << "Quotient: " << num1 / num2 << endl;
        } else {
            cout << "Cannot divide by zero." << endl;
        }
    }
};

class ScientificCalculator {
public:
    float num1, num2;

    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void performOperations() {
        cout << "Square root of " << num1 << ": " << sqrt(num1) << endl;
        cout << "Power of " << num1 << " to " << num2 << ": " << pow(num1, num2) << endl;
        // Add two more scientific operations of your choice
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    // Q1. What type of Inheritance are you using? Multiple Inheritance
    // Q2. Which mode of Inheritance are you using? Public Mode
public:
    void displayResults() {
        cout << "Results from Simple Calculator: " << endl;
        SimpleCalculator::getNumbers();
        SimpleCalculator::performOperations();

        cout << "\nResults from Scientific Calculator: " << endl;
        ScientificCalculator::getNumbers();
        ScientificCalculator::performOperations();
    }
};

int main() {
    HybridCalculator hybridCalc;
    hybridCalc.displayResults(); // Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    
    return 0;
}
