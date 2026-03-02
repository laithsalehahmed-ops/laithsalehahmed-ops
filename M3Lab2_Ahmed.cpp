// CSC 134 
// M3Lab2
// Laith Ahmed
// 3/1/2026

#include <iostream>
using namespace std;

int main() {

    int grade;   // variable to store numerical grade

    // Ask user for input
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Determine letter grade
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    }
    else if (grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    }
    else {
        cout << "Invalid grade entered." << endl;
    }

    return 0;
}