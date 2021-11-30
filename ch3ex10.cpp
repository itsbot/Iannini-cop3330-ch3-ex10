/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Patrick Iannini
 */

/*
Write a program that takes an operation followed by 
two operands and outputs the result. For example:
+ 100 3.14 *4 5
Read the operation into a string called operation and 
use an if-statement to figure out which operation the user 
wants, for example, if (operation=="+"). Read the operands 
into variables of type double. Implement this for operations 
called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/

#include <iostream>
using namespace std;

int main() {
    string operation;
    double num1, num2;
    cout << "Enter an operation (+, –, *, /): ";
    cin >> operation;

    cout << "Enter a first number: ";
    cin >> num1;
    cout << "Enter a second number: ";
    cin >> num2;

    if (operation == "+") {
        cout << num1 <<"+"<< num2 <<"="<< num1+num2;
    }
    if (operation == "-") {
        cout << num1 <<"-"<< num2 <<"="<< num1-num2;
    }
    if (operation == "*") {
        cout << num1 <<"*"<< num2 <<"="<< num1*num2;
    }
    if (operation == "/") {
        cout << num1 <<"/"<< num2 <<"="<< num1/num2;
    }

    return 0;
}