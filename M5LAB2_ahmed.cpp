// CSC 134
// M4T1 
// Laith Ahmed
// 4/22/2026


#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length, width, area;

    // Get inputs
    length = getLength();
    width = getWidth();

    // Calculate area
    area = getArea(length, width);

    // Display results
    displayData(length, width, area);

    return 0;
}

// Get rectangle length
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

// Get rectangle width
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

// Calculate area
double getArea(double length, double width) {
    return length * width;
}

// Display results
void displayData(double length, double width, double area) {
    cout << "\n--- Rectangle Data ---\n";
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
}