#include <iostream>
using namespace std;

int main() {
    int r, sp, s;

    // Prompt user for input
    cout << "Enter the number of rows for the pyramid: ";
    cin >> r;

    // Outer loop controls the number of rows
    for (int i = 1; i <= r; ++i) {
        // Inner loop 1: Prints leading spaces for alignment
        for (sp = 1; sp <= r - i; ++sp) {
            cout << " ";
        }

        // Inner loop 2: Prints stars
        // The number of stars in each row 'i' is (2*i - 1)
        for (s = 1; s <= 2 * i - 1; ++s) {
            cout << "*";
        }

        // Move to the next line after each row is complete
        cout << endl;
    }

    for (int i = 1; i <= r; ++i) {
        // Inner loop 1: Prints leading spaces for alignment
        for (sp = 1; sp <= r - i; ++sp) {
            cout << " ";
        }

        // Inner loop 2: Prints stars
        // The number of stars in each row 'i' is (2*i - 1)
        for (s = 1; s <= 2 * i - 1; ++s) {
            cout <<s;
        }

        // Move to the next line after each row is complete
        cout << endl;
    }

    return 0;
}
