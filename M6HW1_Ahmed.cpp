// M6HW1 gold
// Laith Ahmed
// CSC 134
// 5/2/2026

#include <iostream>
using namespace std;

// Function prototypes
void startGame();
void entrance(bool &hasKey);
void hallway(bool &hasKey);
void storageRoom(bool &hasKey);
void lockedExit(bool hasKey);

int main() {
    startGame();
    return 0;
}

void startGame() {
    bool hasKey = false;

    cout << "=====================================\n";
    cout << "     ESCAPE THE CONSTRUCTION SITE\n";
    cout << "=====================================\n";
    cout << "You are trapped inside a construction site after closing time.\n";
    cout << "Your goal is to explore the area, find the key, and escape.\n\n";

    entrance(hasKey);
}

void entrance(bool &hasKey) {
    int choice;

    cout << "\n--- Entrance Area ---\n";
    cout << "You are standing near the front gate.\n";
    cout << "A warning sign says: Find the site key before trying to leave.\n";
    cout << "1. Go to the hallway\n";
    cout << "2. Check the locked exit\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        hallway(hasKey);
    }
    else if (choice == 2) {
        lockedExit(hasKey);
    }
    else {
        cout << "Invalid choice.\n";
        entrance(hasKey);
    }
}

void hallway(bool &hasKey) {
    int choice;

    cout << "\n--- Main Hallway ---\n";
    cout << "You walk past orange cones and stacks of wood.\n";
    cout << "A worker left a note: The key might be in the storage room.\n";
    cout << "1. Go to the storage room\n";
    cout << "2. Return to the entrance\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        storageRoom(hasKey);
    }
    else if (choice == 2) {
        entrance(hasKey);
    }
    else {
        cout << "Invalid choice.\n";
        hallway(hasKey);
    }
}

void storageRoom(bool &hasKey) {
    int choice;

    cout << "\n--- Storage Room ---\n";
    cout << "You see tools, hard hats, and a dusty toolbox.\n";

    if (hasKey == false) {
        cout << "Inside the toolbox, you find a small silver key.\n";
        cout << "You picked up the key!\n";
        hasKey = true;
    }
    else {
        cout << "The toolbox is empty now because you already took the key.\n";
    }

    cout << "1. Return to the hallway\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        hallway(hasKey);
    }
    else {
        cout << "Invalid choice.\n";
        storageRoom(hasKey);
    }
}

void lockedExit(bool hasKey) {
    int choice;

    cout << "\n--- Locked Exit ---\n";

    if (hasKey == true) {
        cout << "You use the silver key to unlock the gate.\n";
        cout << "The gate opens and you escape the construction site!\n";
        cout << "\nGAME OVER - YOU WIN!\n";
    }
    else {
        cout << "The gate is locked. You need to find the key first.\n";
        cout << "1. Return to the entrance\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            // Need a local variable cannot be changed here, so restart path safely
            bool tempKey = false;
            entrance(tempKey);
        }
        else {
            cout << "Invalid choice.\n";
            lockedExit(hasKey);
        }
    }
}