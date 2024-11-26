#include <iostream>
#include <string>

using namespace std;

enum errorMsgs {
    ERROR_NOALPHA_INPUT = 1,
    ERROR_EMPTY_INPUT = 2
};

void ifErrors(int errorCode) {
    switch (errorCode) {
    case ERROR_NOALPHA_INPUT:
        cerr << "[!] ERROR: Can't run text casing, there is no alphabetical characters in input string.\n";
        break;
    case ERROR_EMPTY_INPUT:
        cerr << "[!] ERROR: Invalid input, nothing entered.\n";
        break;
    default:
        cerr << "[!] ERROR: Unknown error.\n";
        break;
    }
}

bool hasAlpha(const string& str) {
    for (char ch : str) {
        if (isalpha(ch)) {
            return true; //
        }
    }
    return false;
}

int main(int argc, char* argv[])
{
    cout << "Enter text: ";
    string userInput;
    getline (cin, userInput);

    if (userInput == " " || userInput.empty()) {
        ifErrors(ERROR_EMPTY_INPUT);
        cout << "Try again: \n";
        getline(cin, userInput);
    }

    //Checks if userInput is empty
    if (!hasAlpha (userInput)) {
        ifErrors(ERROR_NOALPHA_INPUT);
        cout << "Try again: \n";
        getline(cin, userInput);
    }

    //Uppercase conversion
    cout << "Uppercase      => ";
    for (char chars : userInput) {
        cout << (char) toupper (chars);
    }

    //Lowercase conversion
    cout << endl << "Lowercase      => ";
    for (char chars : userInput) {
        cout << (char) tolower (chars);
    }

    //Sentence casing conversion
    // For some reason, this section gives what I *think* are compiling issues. It's commented out because otherwise, nothing else will run.
    //bool newSentence = true;

    //for (char chars : userInput) {
        //if (chars == '.' || chars == '?' || chars == '!') {
            //userInput += chars;
            //newSentence = true;
        //}
        //else if (isalpha (chars)){
            //if (newSentence) {
                //userInput += toupper(chars);
            //}
            //else {
                //userInput += tolower(chars);
            //}
        //}
    //} 
    //cout << endl << "Sentence casing   => " << userInput << endl;

    //Alternate casing conversion
    // This,,, doesn't work either.

    cout << endl << "Alternate casing   => ";
    bool isUppercase = true;

    for (char chars : userInput) {
        if (isUppercase) {
            cout << (char)toupper(chars);
        }
        else {
            cout << (char)tolower(chars);
        }
        isUppercase = !isUppercase;
    }

}