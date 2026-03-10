// CSC 134
// M3HW1 - Gold
// Laith Ahmed
// March 2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // Question 1
    cout << "Question 1" << endl;

    string likeProgram;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> likeProgram;

    if (likeProgram == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (likeProgram == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << endl;


    // Question 2
    cout << "Question 2" << endl;

    double mealPrice;
    double tax;
    double tip;
    double total;
    int orderType;

    cout << "Enter the price of the meal: ";
    cin >> mealPrice;

    cout << "Enter 1 for dine in, 2 for takeaway: ";
    cin >> orderType;

    tax = mealPrice * 0.08;
    tip = 0;

    if (orderType == 1) {
        tip = mealPrice * 0.15;
    }

    total = mealPrice + tax + tip;

    cout << "Meal: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    cout << endl;


    // Question 3
    cout << "Question 3" << endl;

    int firstChoice;
    int secondChoice;

    cout << "You are in a forest." << endl;
    cout << "Enter 1 to go left or 2 to go right: ";
    cin >> firstChoice;

    if (firstChoice == 1) {
        cout << "You fell into a hole. Game over." << endl;
    }
    else if (firstChoice == 2) {
        cout << "You see a cabin." << endl;
        cout << "Enter 1 to go inside or 2 to run away: ";
        cin >> secondChoice;

        if (secondChoice == 1) {
            cout << "A monster was inside. You lose." << endl;
        }
        else if (secondChoice == 2) {
            cout << "You escaped safely. You win!" << endl;
        }
    }

    cout << endl;


    // Question 4
    cout << "Question 4" << endl;

    srand(time(0));

    int num1;
    int num2;
    int userAnswer;
    int correctAnswer;

    num1 = rand() % 10;
    num2 = rand() % 10;
    correctAnswer = num1 + num2;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect." << endl;
    }

    return 0;
}