#include <iostream>
using namespace std;

enum calcuationErrors {
    ERROR_INVALID_FLOAT_INPUT = 1,
};

int main()
{
   //Ask and input
    float baseNumber;
    cout << "Please enter a number: " << endl;
    cin >> baseNumber;

    while (cin.fail()) {
        cerr << "[!] ERROR: Invalid input. Please try again.";
        return 1;
        cout << "Please enter a number: " << endl;
        cin >> baseNumber;
    }

    //Outputting all options
    cout << endl << "neg(x): " << baseNumber * -1 << endl;
    // For above, I initially wrote 'cout << endl << "neg(x): -" << baseNumber << endl;', however as the code allows for a float, if the user inputted a negative as baseNumber, it'd print as --x, not -x. Hence the change.
    cout << "abs(x): " << abs(baseNumber) << endl;
    cout << "pow2(x): " << baseNumber * baseNumber << endl;
    cout << "pow3(x): " << baseNumber * baseNumber * baseNumber << endl;
    cout << "sqrt(x): " << sqrt(baseNumber) << endl;
    cout << "floor(x): " << floor(baseNumber) << endl;
    cout << "ceil(x): " << ceil(baseNumber) << endl;
    cout << "round(x): " << round(baseNumber) << endl;

    return 0;
}