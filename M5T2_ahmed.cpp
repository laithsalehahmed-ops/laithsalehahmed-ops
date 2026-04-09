// M5T2
// CSC 134
// Laith Ahmed
// 4/9/2026

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);
void printAnswerLine(int num, int squared);

int main() {
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        int result = square(i);              // get square
        printAnswerLine(i, result);          // print line
    }

    return 0;
}

// Value-returning function
int square(int num) {
    return num * num;
}

// Void function
void printAnswerLine(int num, int squared) {
    cout << num << " squared = " << squared << endl;
}