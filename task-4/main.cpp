#include <iostream>
#include <string>
using namespace std;

enum errorMsgs {
    ERROR_USER_INPUT = 1,
    ERROR_EMPTY_INPUT = 2
};

void ifErrors (int errorCode) {
    switch (errorCode) {
    case ERROR_USER_INPUT:
        cerr << "[!] ERROR: Invalid input, text needed.\n";
        break;
    case ERROR_EMPTY_INPUT:
        cerr << "[!] ERROR: Invalid input, nothing entered.\n";
        break;
    default:
        cerr << "[!] ERROR: Unknown error.\n";
        break;
    }
}

int main(int argx, char* argv[])
{
    cout << "Enter some text : ";
    string userInput;
    getline (cin, userInput);

    //Checks for errors
    while (cin.fail()) {
        ifErrors (ERROR_USER_INPUT);
        cout << "Try again: \n";
        getline(cin, userInput);
    }

    while (userInput == " " || userInput.empty()) {
        ifErrors (ERROR_EMPTY_INPUT);
        cout << "Try again: \n";
        getline(cin, userInput);
    }

    //Top line
    for (char chars : userInput) {
        cout << "+=-=";
    }
    cout << "+ \n";

    // Tabulate string + middle line
    for (char chars : userInput) {
        cout << "| " << chars << " ";
    }
    cout << "| \n";

    //Bottom line
    for (char chars : userInput) {
        cout << "+=-=";
    }
    cout << "+ \n";

}

