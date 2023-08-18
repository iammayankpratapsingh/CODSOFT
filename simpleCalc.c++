/*Task 2 : Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an operation to perform.*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char opretr;
    cout << "\n\n------------------------------Simple Calculator with operation(+, -, *, /) !!!---------------------------------------------" << endl;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Enter an operator : ";
    cin >> opretr;

    switch (opretr)
    {
    case '+':
        cout << "The sum of " << num1 << " and " << num2 << " is " << (num1 + num2) << endl;
        break;
    case '-':
        cout << "The difference of " << num1 << " and " << num2 << " is " << (num1 - num2) << endl;
        break;
    case '*':
        cout << "The multiplication of " << num1 << " and " << num2 << " is " << (num1 * num2) << endl;
        break;
    case '/':
        cout << "The division of " << num1 << " and " << num2 << " is " << (num1 / num2) << endl;
        break;
    default:
        cout << "Please enter valid operator !!!" << endl;
    }

    return 0;
}