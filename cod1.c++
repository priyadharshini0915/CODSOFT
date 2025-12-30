#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the numbers ";
    cin >> num1 >> num2;
    int choice;
    cout << "enter the choice";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int add;
        cout << " The Addition of two numbers " << (add = num1 + num2);
        break;
    }
    case 2:
    {
        int sub;
        cout << " The Subtraction of Two numbers " << (sub = num1 - num2);
        break;
    }
    case 3:
    {
        int mul;
        cout << " The Multiplication of Two numbers " << (mul = num1 - num2);
        break;
    }
    case 4:
    {
        int div;
        cout << " The Subtraction of Two numbers " << (div = num1 - num2);
        break;
    }
    default:
    {
        cout << "Exit ";
        break;
    }
    }
    return 0;
}