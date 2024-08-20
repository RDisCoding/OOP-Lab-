#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Account{
    float money;
    public:
    Account(float money){
        this->money = money;
        cout<<"Current Balance: Rs. "<<money<<endl;
    }

    void deposit(float amount){
        money = money + amount;
        cout<<"Rs. "<<amount<<" was deposited in the bank account."<<endl;
        cout<<"Current Balance: Rs. "<<money<<endl;
    }

    void withdraw(float amount){
        money = money - amount;
        if(money<0){
            cout<<"Insufficient Balance. Withdrawal Unsuccessful."<<endl;
            // cout<<"Aukat me reh gareeb"<<endl;
            return;
        }
        cout<<"Rs. "<<amount<<" was withdrawed from the bank account."<<endl;
        cout<<"Current Balance: Rs. "<<money<<endl;
    }

};

int main()
{
    Account a(20000);
    a.deposit(10000);
    a.withdraw(5000);
    a.withdraw(50000);
    return 0;
}