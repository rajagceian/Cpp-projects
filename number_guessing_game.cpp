#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int random_number = rand() % 100 + 1;
    int num;
    cout << "Guess a Number ( 1 - 100 ) : ";
    cin >> num;
    do
    {
        if (num > random_number)
        {
            cout << "It is greater , Guess Smaller number : ";
            cin >> num;
        }
        else if (num < random_number)
        {
            cout << "It is Smaller , Guess Greater number : ";
            cin >> num;
        }
        else
        {
            cout << "Congretulations,You got it!";
            break;
        }

    } while (num);

    return 0;
}