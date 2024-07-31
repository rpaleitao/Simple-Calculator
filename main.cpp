#include <iostream>

using namespace std;

int main () {
    float num1, num2, result;
    int op;

    cout << "Insert first number: ";
    cin >> num1;

    cout << "insert second number: ";
    cin >> num2;

    cout << "Select operator: \n";
    cout << "1 -> +\n";
    cout << "2 -> -\n";
    cout << "3 -> *\n";
    cout << "4 -> /\n";
    cin >> op;

    switch (op)
    {
    case 1:
        result = num1 + num2;
        cout << num1 << " " << "+" << " " <<  num2 << " " << "=" << " " << result << endl;;
        break;
    case 2:
        result = num1 - num2;
        cout << num1 << " " << "-" << " " <<  num2 << " " << "=" << " " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << num1 << " " << "*" << " " <<  num2 << " " << "=" << " " << result << endl;
        break;
    case 4:
        if(num2 != 0) {
            result = num1 / num2;
            cout << num1 << " " << "/" << " " <<  num2 << " " << "=" << " " << result << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Invalid operator." << endl;
        break;
    }

    return 0;
}