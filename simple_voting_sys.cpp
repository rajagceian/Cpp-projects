#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "1 : to vote for BJP\n";
    cout << "2 : to vote for Congress\n";
    cout << "3 : to vote for RJD\n";
    cout << "4 : to vote for AAP\n";
    cout << "5 : to vote for ShivSena\n";
    cout << "6 : NOTA\n";
    cout << "0 : to show voting result\n";
    int EVM[6] = {};
    int choice;
    while (1)
    {
        cout << "Vote for : ";
        cin >> choice;
        switch (choice)
        {
        case (1):
            EVM[0]++;
            break;
        case (2):
            EVM[1]++;
            break;
        case (3):
            EVM[2]++;
            break;
        case (4):
            EVM[3]++;
            break;
        case (5):
            EVM[4]++;
            break;
        case (6):
            EVM[5]++;
            break;
        case (0):
            int res = INT_MIN;
            int total = 0;
            int idx = -1;
            for (int i = 0; i < 6; i++)
            {
                total += EVM[i];
                if (res < EVM[i])
                {
                    res = EVM[i];
                    idx = i;
                }
            }
            cout<<endl;
            if (idx == 0 && res!=0)
            {
                cout << "BJP won with " << EVM[idx] << " votes\n";
            }
            else if (idx == 1 && res!=0)
            {
                cout << "Congress won with " << EVM[idx] << " votes\n";
            }
            else if (idx == 2 && res!=0)
            {
                cout << "RJD won with " << EVM[idx] << " votes\n";
            }
            else if (idx == 3 && res!=0)
            {
                cout << "AAP won with " << EVM[idx] << " votes\n";
            }
            else if (idx==4 && res!=0)
            {
                cout << "ShivSena won with " << EVM[idx] << " votes\n";
            }
            cout << "\nTotal votes : " << total << endl;
            cout << "BJP : " << EVM[0] << endl;
            cout << "Congress : " << EVM[1] << endl;
            cout << "RJD : " << EVM[2] << endl;
            cout << "AAP : " << EVM[3] << endl;
            cout << "ShiveSena : " << EVM[4] << endl;
            cout << "NOTA : " << EVM[5] << endl;
            exit(0);
            break;

        }
    }
    return 0;
}