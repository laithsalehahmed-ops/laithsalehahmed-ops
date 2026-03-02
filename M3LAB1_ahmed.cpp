// game
// CSC 134
// Laith Ahmed
// 3/1/2026

// compiler directives
#include <iostream>
using namespace std;

int main() {

    // variable to store user choice
    int choice;

    // ask the user a question
    cout << "You encounter a wild monster!" << endl;
    cout << "What do you do?" << endl;
    cout << "1. Fight" << endl;
    cout << "2. Run" << endl;
    cout << "Enter 1 or 2: ";
    cin >> choice;

    // decision using if statements
    if (choice == 1) {
        cout << "You chose to fight!" << endl;
        cout << "You defeated the monster and found treasure!" << endl;
    }
    else if (choice == 2) {
        cout << "You chose to run!" << endl;
        cout << "You escaped safely but found nothing." << endl;
    }
    else {
        cout << "That is not a valid choice." << endl;
    }

    // ending message
    cout << "Game over. Thanks for playing!" << endl;

    return 0;
}