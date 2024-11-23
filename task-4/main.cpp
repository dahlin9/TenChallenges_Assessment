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
        cerr << "[!} ERROR: Invalid input, text needed.";
        cout << "Try again: \n";
        getline(cin, userInput);
    }

    while (userInput == " ") {
        cerr << "[!] ERROR: Invalid input, nothing entered.";
        cout << "Try again: \n";
        getline(cin, userInput);
    }

}