#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "Enter text: ";
    string userInput;
    getline (cin, userInput);

    cout << "Uppercase      => ";
    for (char chars : userInput) {
        cout << (char) toupper (chars);
    }

    cout << endl << "Lowercase      => ";
    for (char chars : userInput) {
        cout << (char) tolower (chars);
    }

    cout << endl << "Alternate casing      => ";
    for (char chars : userInput) {
        if (isUpper)
    }
    return 0;
}