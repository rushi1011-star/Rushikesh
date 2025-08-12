#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Choose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1)
        cout << "Result = " << a + b << endl;
    else if (choice == 2)
        cout << "Result = " << a - b << endl;
    else if (choice == 3)
        cout << "Result = " << a * b << endl;
    else if (choice == 4) {
        if (b != 0)
            cout << "Result = " << a / b << endl;
        else
            cout << "Cannot divide by 0!" << endl;
    }
    else
        cout << "Invalid choice!" << endl;

    return 0;
}
