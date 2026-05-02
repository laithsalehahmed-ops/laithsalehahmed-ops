// M6T1 
// Laith Ahmed
// 5/1/2026

#include <iostream>
using namespace std;

// Function prototypes
void part1();
void part2();

int main() {
    cout << "=== Part 1 (No Array) ===\n";
    part1();

    cout << "\n=== Part 2 (With Array) ===\n";
    part2();

    return 0;
}

// ----------------------
// Part 1 (NO ARRAY)
// ----------------------
void part1() {
    int cars;
    int total = 0;

    // Loop for Monday-Friday (5 days)
    for (int day = 1; day <= 5; day++) {
        cout << "Enter number of cars for day " << day << ": ";
        cin >> cars;

        total += cars;
    }

    double average = total / 5.0;

    cout << "Total cars: " << total << endl;
    cout << "Average per day: " << average << endl;
}

// ----------------------
// Part 2 (WITH ARRAY)
// ----------------------
void part2() {
    int cars[5];   // array for 5 days
    int total = 0;

    string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    // Input + store values
    for (int i = 0; i < 5; i++) {
        cout << "Enter number of cars for " << days[i] << ": ";
        cin >> cars[i];

        total += cars[i];
    }

    double average = total / 5.0;

    cout << "\nTotal cars: " << total << endl;
    cout << "Average per day: " << average << endl;

    // Print each day
    cout << "\nDaily Counts:\n";
    for (int i = 0; i < 5; i++) {
        cout << days[i] << ": " << cars[i] << endl;
    }

    // ASCII Bar Chart
    cout << "\nBar Chart:\n";
    for (int i = 0; i < 5; i++) {
        cout << days[i] << ": ";

        // Print stars (1 star = 10 cars)
        for (int j = 0; j < cars[i] / 10; j++) {
            cout << "*";
        }

        cout << endl;
    }
}