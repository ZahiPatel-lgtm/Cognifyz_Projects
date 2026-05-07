#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char opt;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter operator (+, -, *, /, %): ";
    cin>>opt;
    switch(opt)
    {
        case '+':
            cout<<"Result: "<<num1 + num2;
            break;
        case '-':
            cout<<"Result: "<<num1 - num2;
            break;
        case '*':
            cout<<"Result: "<<num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout<<"Result: "<<num1 / num2;
            else
                cout<<"Error: Division by zero";
            break;
        case '%':
            if(num2 != 0)
                cout<<"Result: "<<num1 % num2;
            else
                cout<<"Error: Division by zero";
            break;
        default:
            cout<<"Invalid operator!";
    }


}

//Program Description

// This program is a simple calculator developed using C++. It takes two numbers and an arithmetic operator (+, -, *, /, %) as input from the user and performs the selected operation.
// The program uses conditional statements (if-else) to check the operator entered by the user and then calculates the result accordingly. Finally, the result is displayed on the console.

// This program helps in understanding:
// Basic input and output operations,
// Arithmetic operations,
// Conditional statements (if-else),
// User interaction in C++,

// Author
// Zahi Patel
