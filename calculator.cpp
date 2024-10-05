#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y;
    cout << "Enter first no. : ";
    cin >> x;
    cout << "Operators :- \n";
    cout << "1 : Enter second no.\n";
    cout << "2 : +\n";
    cout << "3 : -\n";
    cout << "4 : *\n";
    cout << "5 : /\n";
    cout << "6 : x^y\n";
    cout << "7 : square root of first no.\n";
    cout << "8 : square of first no.\n";
    cout << "9 : cube root of first no.\n";
    cout << "10 : Factorial of first no.\n";
    cout << "0 : exit\n";
    while (1)
    {
        cout << "\nChoose an operator : \n";
        int choice;
        cin >> choice;
        double fact=1;
        switch (choice)
        {
        case (1):
            cout << "Enter second no. : ";
            cin >> y;
            break;
        case (2):
            cout << x << " + " << y << " = " << x + y;
            break;
        case (3):
            cout << x << " - " << y << " = " << x - y;
            break;
        case (4):
            cout << x << " * " << y << " = " << x * y;
            break;
        case (5):
            cout << x << " / " << y << " = " << x / y;
            break;
        case (6):
            cout << x << " ^ " << y << " = " << pow(x, y);
            break;
        case (7):
            cout << "square root of " << x << " = " << sqrt(x);
            break;
        case (8):
            cout << "square of " << x << " = " << x*x;
            break;
        case (9):
            cout << "cube root of " << x << " = " << cbrt(x);
            break;
        case (10):
        for(int i=1;i<=x;i++) fact *=i;
            cout<< x << "! = " << fact;
            break;
        case (0):
            exit(0);
        default:
            cout << "Invalid operator";
            break;
        }
    }
    return 0;
}