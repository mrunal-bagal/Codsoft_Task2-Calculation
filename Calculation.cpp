#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num1, num2;
    char operation;

    cout << "Enter The First number: ";
    cin >> num1;
   
    cout << "Enter The Second number:";
    cin >> num2;

    cout << "Enter The operator (+, -, *, /): ";
    cout << "Enter The operator";
    cin >> operation;


    switch(operation)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is not valid
            cout << "Invalid operator";
            break;
    }

    return 0;
}
