// CSC 134
// M4T1 
// Laith Ahmed
// 3/15/2026

#include <iostream>
using namespace std;

int main()
{

    // Program 5-3
    // This program demonstrates a simple while loop.

    int number = 0;

    while (number < 5)
    {
        cout << "Hello\n";
        number++;
    }

    cout << "That's all!\n\n";


    // Program 5-6
    // This program displays numbers and their squares.

    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number\tNumber Squared\n";
    cout << "---------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++;
    }

    return 0;
}