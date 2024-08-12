#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class order
{
    public:
    int n, m, p;
    inline float discount();
};

float order::discount(){
        float total;
        total = n * 0.95 * 1500 + p * 0.85 * 450 + m * 0.9 * 200; // discount on all items
        total = total * 1.1; // sales tax 10%
        return total;
    }


int main()
{
    order l;
    cout<<"Enter the number of toasters: ";
    cin >> l.m;
    cout<<"Enter the number of miners: ";
    cin >> l.n;
    cout<<"Enter the number of fans: ";
    cin >> l.p;
    cout<<"The price to be paid is: "<<l.discount();

    return 0;
}