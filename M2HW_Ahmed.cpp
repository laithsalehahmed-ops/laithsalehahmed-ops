/*
CSC 134
M2HW gold
Laith
2/21/2026
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
cout << fixed << setprecision(2);

// =====================
// Question 1 - Banking
// =====================
cout << "Question 1: Banking\n";

string name;
double startBalance;
double deposit;
double withdrawal;
double finalBalance;
int accountNumber = 1001;

cout << "Enter your name: ";
getline(cin, name);

cout << "Enter starting balance: ";
cin >> startBalance;

cout << "Enter deposit amount: ";
cin >> deposit;

cout << "Enter withdrawal amount: ";
cin >> withdrawal;

finalBalance = startBalance + deposit - withdrawal;

cout << "\nName on Account: " << name << endl;
cout << "Account Number: " << accountNumber << endl;
cout << "Final Balance: $" << finalBalance << endl;


// =====================
// Question 2 - Crates
// =====================
cout << "\nQuestion 2: General Crates\n";

double length, width, height;
double volume;
double costPerCubicFoot = 0.30;
double chargePerCubicFoot = 0.52;
double cost, charge, profit;

cout << "Enter length: ";
cin >> length;

cout << "Enter width: ";
cin >> width;

cout << "Enter height: ";
cin >> height;

volume = length * width * height;

cost = volume * costPerCubicFoot;
charge = volume * chargePerCubicFoot;
profit = charge - cost;

cout << "Volume: " << volume << endl;
cout << "Cost: $" << cost << endl;
cout << "Charge: $" << charge << endl;
cout << "Profit: $" << profit << endl;


// =====================
// Question 3 - Pizza
// =====================
cout << "\nQuestion 3: Pizza Party\n";

int pizzas;
int slicesPerPizza;
int visitors;
int totalSlices;
int neededSlices;
int leftover;

cout << "How many pizzas? ";
cin >> pizzas;

cout << "How many slices per pizza? ";
cin >> slicesPerPizza;

cout << "How many visitors? ";
cin >> visitors;

totalSlices = pizzas * slicesPerPizza;
neededSlices = visitors * 3;
leftover = totalSlices - neededSlices;

cout << "Slices leftover: " << leftover << endl;


// =====================
// Question 4 - Cheer
// =====================
cout << "\nQuestion 4: Cheer Program\n";

string letsGo, school, team, cheerOne, cheerTwo;

letsGo = "Let's go ";
school = "FTCC";
team = "Trojans";

cheerOne = letsGo + school;
cheerTwo = letsGo + team;

cout << cheerOne << endl;
cout << cheerOne << endl;
cout << cheerOne << endl;
cout << cheerTwo << endl;

return 0;

}