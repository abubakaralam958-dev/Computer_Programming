#include <iostream>
using namespace std;

int main() 
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)   // rows ke liye loop
    {
        for (int j = 1; j <= i; j++) // stars ke liye loop
        {
            cout << "* ";
        }
        cout << endl; // next line
    }

    return 0;
}