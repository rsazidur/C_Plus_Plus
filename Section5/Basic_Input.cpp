//
// Created by rsazi on 3/18/2023.
//
#include <iostream>
using namespace std;
int main() {
    int num1;
    int num2;
    double num3;

    cout << "Enter an Integer:";
    cin >> num1;
    cout << "You have entered " << num1 << endl;

    cout << "Enter first number:";
    cin >> num1;

    cout << "Enter second number:";
    cin >> num2;

    cout << "You have entered: " << num1 << " and " << num2 << endl;

    cout << "Enter numbers separated by space:";
    cin >> num1 >> num2;
    cout << "You have entered: " << num1 << " and " << num2 << endl;

    cout << "Enter a double number:";
    cin >> num3;
    cout << "Your double number is: " << num3 << endl;

    return 0;
}