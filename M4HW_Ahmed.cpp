/// Laith Ahmed
/// 3/25/26
/// 6M4HW
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number from 1 to 12: ";
    cin >> num;

    // Input validation loop
    while (num < 1 || num > 12) {
        cout << "Invalid input. Enter a number from 1 to 12: ";
        cin >> num;
    }

    int i = 1;

    // Times table loop
    while (i <= 12) {
        cout << num << " times " << i << " is " << num * i << "." << endl;
        i++;
    }

    return 0;
}