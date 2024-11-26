#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Ask and input
    cout << "What is your real name?\n";
    string playerName;
    getline(cin, playerName);

    cout << "What is your in-game username?\n";
    string userName;
    getline(cin, userName);

    cout << "What is your clan tag?\n";
    string clanTag;
    getline(cin, clanTag);

    cout << "How much XP do you have?\n";
    int experiencePoints;
    cin >> experiencePoints;

    // If experiencePoints is a negative integer, this keeps the user in a loop until it is positive
    while (experiencePoints < 0) {
        cout << "Invalid XP level, try again!\n";
        cout << "How much XP do you have?\n";
        cin >> experiencePoints;
    }

    //XP calculator
    int currentPlayerLevel = experiencePoints / 100;
    int assumedLevelIncrease = currentPlayerLevel + 1;
    int experiencePointsProgress = (assumedLevelIncrease * 100) - experiencePoints;

    //Output of answers
    cout << "Your name is [" << clanTag << "] " << userName << endl;
    cout << "You have " << experiencePoints << " experience points." << endl;
    cout << "Your current level is " << currentPlayerLevel << "." << endl;
    cout << "You need " << experiencePointsProgress << " points to reach the next level, which is " << assumedLevelIncrease << "." << endl;

    return 0;
}