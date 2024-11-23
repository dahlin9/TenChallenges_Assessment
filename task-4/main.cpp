#include <iostream>
#include <string>
using namespace std;

enum errorMsgs {
    ERROR_INVALID_FLOAT_INPUT = 1,
};

int main()
{
    cout << "Enter some text : ";
    string userInput;
    getline (cin, userInput);

    while (cin.fail()) {
        cerr << "Invalid input try again!\n";
        cout << "Enter some text: \n";
        getline(cin, userInput);
    }


}