// 8. Write a C program to create Simple Calculator using switch case.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    int num1, num2;

    cout << "Enter operator (+,-,*,/,%): ";
    cin >> ch;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    switch(ch)
    {
        case '+':
            cout << "Sum = " << num1 + num2;
            break;

        case '-':
            cout << "Sub = " << num1 - num2;
            break;

        case '*':
            cout << "Mul = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Div = " << num1 / num2;
            else
                cout << "Cannot divide by zero";
            break;

        case '%':
            if(num2 != 0)
                cout << "Mod = " << num1 % num2;
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}