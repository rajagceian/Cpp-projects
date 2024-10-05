#include <bits/stdc++.h>
using namespace std;
int main()
{
    double t;
    cout << "Temperature Formates :- \n";
    cout << "1 : Celicius\n";
    cout << "2 : Fahrenheit\n";
    cout << "3 : Kelvin\n";
    cout << "0 : Exit\n";
    while (1)
    {
        int choice;
        cout << "Enter temperature Formate : ";
        cin >> choice;
        if (choice != 0)
        {
            cout << "Enter Temperature : ";
            cin >> t;
        }
        else
            exit(0);
        cout << "Converted into :- \n";
        cout << "1 : Celicius\n";
        cout << "2 : Fahrenheit\n";
        cout << "3 : Kelvin\n";
        cout << "0 : Exit\n";
        int choice2;
        cout << "Converted into : ";
        cin >> choice2;
        if (choice2 == 0)
            exit(0);
        if (choice2 == choice)
            cout << t << endl;
        else if (choice == 1 && choice2 == 2)
        {
            double f = (t * (9 / 5)) + 32;
            cout << f << endl;
        }
        else if (choice == 1 && choice2 == 3)
            cout << t + 273.2 << endl;
        else if (choice == 2 && choice2 == 1)
        {
            double c = (t - 32) * 5 / 9;
            cout << c << endl;
        }
        else if (choice == 2 && choice2 == 3)
        {
            double k = ((t - 32) * 5 / 9) + 273.2;
            cout << k << endl;
        }
        else if (choice == 3 && choice2 == 1)
            cout << t - 273.2 << endl;
        else
        {
            double k = ((t - 273.2) * (9 / 5)) + 32;
            cout << k << endl;
        }
    }
    return 0;
}