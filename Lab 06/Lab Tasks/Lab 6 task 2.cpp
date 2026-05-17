#include <iostream>

using namespace std;

int main() {

    // Outer loop for rows (1 to 10)
    for (int i = 1; i <= 10; i++) {

        // Inner loop for columns (1 to 10)
        for (int j = 1; j <= 10; j++) {

            cout <<  i * j << "\t";  // formatted output
        }

        cout << endl; // move to next line after each row
    }

    return 0;
}