// Experiment 4.         Create a class to represent a bank account. It should include the following: 
//                    Data Members: 
//                              Name of account holder 
//                              Account number 
//                              Type of account 
//                              Balance amount 
//                   Member Function: 
//                             To initialize the data members with appropriate data 
//                             To deposit an amount 
//  To withdraw an amount after checking the balance 
//  To display details of account holder 
 
// Write a program to use this class.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Account{
    string name;
    long int accountNo;
    string accountType;
    float money;
    public:
    Account(){
        cout<<"Enter the Account Holder's Name: "<<name;
        cin>>name;
        cout<<"Enter Account Number: ";
        cin>>accountNo;
        cout<<"Enter Account Type: ";
        cin>>accountType;
        cout<<"Enter Balance Amount: ";
        cin>>money;
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

    ~Account(){
        cout<<"Account Details: "<<endl;
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Account No. : "<<accountNo<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Current Balance: "<<money<<endl;
    }

};

int main()
{
    Account a;
    a.deposit(10000);
    a.withdraw(5000);
    a.withdraw(50000);
    return 0;
}