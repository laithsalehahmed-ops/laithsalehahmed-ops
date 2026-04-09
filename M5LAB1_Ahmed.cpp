#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Laith Ahmed
04/09/2026
*/

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

// Added new choices
void choice_upstairs();
void choice_kitchen();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() {
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (1 == choice) {
    choice_front_door();
  } 
  else if (2 == choice) {
    choice_back_door();   // ✅ added
  } 
  else if (3 == choice) {
    choice_go_home();     // ✅ added
  } 
  else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return;
  } 
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    main_menu();
  }
}

// FUNCTION DEFINITIONS

void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's unlocked this time..." << endl;
  cout << "Inside you see stairs and a kitchen." << endl;

  cout << "Do you:" << endl;
  cout << "1. Go upstairs" << endl;
  cout << "2. Go into the kitchen" << endl;

  int choice;
  cout << "Choose: ";
  cin >> choice;

  if (1 == choice) {
    choice_upstairs();
  } 
  else if (2 == choice) {
    choice_kitchen();
  }
}

void choice_back_door() {
  cout << "You sneak around to the back door." << endl;
  cout << "It creaks open..." << endl;
  cout << "You find a dark basement full of boxes." << endl;
  cout << "Something moves in the shadows..." << endl;
  cout << "You run away!" << endl;
}

void choice_go_home() {
  cout << "You decide it's not worth it." << endl;
  cout << "You go home and relax instead." << endl;
  cout << "Safe choice." << endl;
}

// NEW BRANCH 1
void choice_upstairs() {
  cout << "You walk upstairs carefully..." << endl;
  cout << "You find a chest full of gold!" << endl;
  cout << "You win!" << endl;
}

// NEW BRANCH 2
void choice_kitchen() {
  cout << "You enter the kitchen..." << endl;
  cout << "There's old food on the table." << endl;
  cout << "You take a bite... bad idea." << endl;
  cout << "You run out of the house." << endl;
}