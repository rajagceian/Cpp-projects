#include <bits/stdc++.h>
using namespace std;
int main() {
    double bal=0,a;
    cout<<"Services :- \n";
    cout<<"1 : check Balance\n";
    cout<<"2 : Deposit\n";
    cout<<"3 : Withdraw\n";
    cout<<"0 : Exit\n";
    int choice;
    while(1){
        cout<<"Select Service : ";
        cin>>choice;
        switch (choice)
        {
        case(1):
            cout<<"Balance : "<<bal<<endl;
            break;
        case(2):
            cout<<"Add Amount : ";
            cin>>a;
            bal+=a;
            break;  
        case(3):
            cout<<"Enter Amount : ";
            cin>>a;
            bal-=a;
            break;  
        case(0):
        exit(0);      
        default:
            break;
        }
    }
    return 0;
}