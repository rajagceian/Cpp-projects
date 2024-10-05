#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "-: Palindrome Checker :-\n";
    cout << "1 : for word\n";
    cout << "2 : for number\n";
    cout << "0 : Exit\n";
    string str;
    int num;
    int choice;
    while (1)
    {
        cout << "Select word or number : ";
        cin >> choice;
        switch (choice)
        {
        case (1):
            cout << "Enter word : ";
            cin >> str;
            {
            int i = 0;
            int j = str.length() - 1;
            bool flag=true;
            while (i < j)
            {
                if (str[i] != str[j])
                {
                    cout << str << " is not a Palindrome\n";
                    flag=false;
                    break;
                }
                i++;
                j--;
            }
            if(flag==true) cout << str << " is a Palindrome\n";
            }
            break;

        case (2):
            cout << "Enter a Number : ";
            cin >> num;
            if (num < 0)
            {
                cout << num << " is not a Palindrome\n";
                break;
            }{
            int temp = num;
            int newNum = 0;
            while (num)
            {
                int r = num % 10;
                newNum = newNum * 10 + r;
                num /= 10;
            }
            if (temp == newNum)
            {
                cout << temp << " is a Palindrome\n";
            }
            else
            {
                cout << temp << " is not a Palindrome\n";
            }}
            break;
        case (0):
            exit(0);
        }
    }
    return 0;
}