#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct bill{
    string name;
    int calls;
    float total;
    void Input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter the number of calls: ";
        cin>>calls;
    }

    void computeBill(){
        if(calls <= 150){
            total = 200 + (calls-100)*0.6;
        }
        else if (calls >150 && calls <=200)
        {
            total = 200 + 50 * 0.6 + (calls-150) * 0.5;
        }
        else if (calls > 200)
        {
            total = 200 + 30 + 25 + (calls-200)*0.4;
        }
    }

    void Output(){
        computeBill();
        cout<<name<<endl;
        cout<<"Total amount to be paid: "<<total;
    }

};

int main()
{
    bill b;
    b.Input();
    b.Output();
    return 0;
}