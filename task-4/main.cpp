#include <iostream>
#include <string>
using namespace std;

enum errorMsgs {
    ERROR_USER_INPUT = 1,
};

int main(int argx, char* argv[])
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

    //Top line
    for (char c : userInput) {
        cout << "+=-=";
    }
    cout << "+ \n";

    // Tabulate string + middle line
    for (char c : userInput) {
        cout << "| " << c << " ";
    }
    cout << "| \n";

    //Bottom line
    for (char c : userInput) {
        cout << "+=-=";
    }
    cout << "+ \n";

}