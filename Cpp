#include <iostream>
using namespace std;

void add() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a + b << endl;
}

void subtract() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a - b << endl;
}

void multiply() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a * b << endl;
}

void divide() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b != 0) {
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Error! Division by zero." << endl;
    }
}

int main() {
    int choice;
    
    while (true) {
        cout << "\nSimple Calculator Menu:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                cout << "Exiting the calculator. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}
