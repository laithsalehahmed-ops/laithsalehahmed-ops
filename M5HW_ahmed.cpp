// CSC 134
// M4T1 
// Laith Ahmed
// 4/22/2026

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void question1();
void question2();
void question3();
void question4();
void question5();

int main() {
    int choice = 0;

    while (choice != 6) {
        cout << "\n===== M5HW1 Menu =====\n";
        cout << "1. Average Rainfall\n";
        cout << "2. Block Volume\n";
        cout << "3. Roman Numerals\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            question1();
        }
        else if (choice == 2) {
            question2();
        }
        else if (choice == 3) {
            question3();
        }
        else if (choice == 4) {
            question4();
        }
        else if (choice == 5) {
            question5();
        }
        else if (choice == 6) {
            cout << "Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Please enter 1 through 6.\n";
        }
    }

    return 0;
}

// Question 1
void question1() {
    string month1, month2, month3;
    double rain1, rain2, rain3, average;

    cout << "\nQuestion 1 - Average Rainfall\n";

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << average << " inches.\n";
}

// Question 2
void question2() {
    double width, length, height, volume;

    cout << "\nQuestion 2 - Block Volume\n";

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: all sides must be greater than zero.\n";
    }
    else {
        volume = width * length * height;
        cout << "Volume = " << volume << endl;
    }
}

// Question 3
void question3() {
    int num;

    cout << "\nQuestion 3 - Roman Numerals\n";
    cout << "Enter a number (1 - 10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Error: enter a number from 1 to 10.\n";
    }
    else {
        cout << "The Roman numeral version of " << num << " is ";

        switch (num) {
            case 1: cout << "I"; break;
            case 2: cout << "II"; break;
            case 3: cout << "III"; break;
            case 4: cout << "IV"; break;
            case 5: cout << "V"; break;
            case 6: cout << "VI"; break;
            case 7: cout << "VII"; break;
            case 8: cout << "VIII"; break;
            case 9: cout << "IX"; break;
            case 10: cout << "X"; break;
        }

        cout << ".\n";
    }
}

// Question 4
void question4() {
    int choice;
    double radius, length, width, base, height, area;
    const double PI = 3.14159;

    cout << "\nGeometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n";
    }
    else if (choice == 1) {
        cout << "Enter the circle's radius: ";
        cin >> radius;

        if (radius < 0) {
            cout << "The radius cannot be less than zero.\n";
        }
        else {
            area = PI * radius * radius;
            cout << "The area is " << area << endl;
        }
    }
    else if (choice == 2) {
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;

        if (length < 0 || width < 0) {
            cout << "The length and width cannot be less than zero.\n";
        }
        else {
            area = length * width;
            cout << "The area is " << area << endl;
        }
    }
    else if (choice == 3) {
        cout << "Enter the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;

        if (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height.\n";
        }
        else {
            area = base * height * 0.5;
            cout << "The area is " << area << endl;
        }
    }
    else if (choice == 4) {
        cout << "Returning to main menu.\n";
    }
}

// Question 5
void question5() {
    double speed, distance;
    int hours, count;

    cout << "\nQuestion 5 - Distance Traveled\n";
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (speed < 0) {
        cout << "Error: speed cannot be negative.\n";
    }
    else if (hours < 1) {
        cout << "Error: time traveled must be at least 1 hour.\n";
    }
    else {
        cout << "\nHour\tDistance Traveled\n";
        cout << "--------------------------------\n";

        for (count = 1; count <= hours; count++) {
            distance = speed * count;
            cout << count << "\t" << distance << endl;
        }
    }
}