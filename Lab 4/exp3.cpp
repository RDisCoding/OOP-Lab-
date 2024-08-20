// Experiment 3.            
// Income tax for individuals is computed on slab rates as follows: 
// Income Tax Payable 
// Upto Rs. 1,00,000/- Nill 
// From Rs. 1,00,001/- to Rs. 1,50,000/- 10% of the excess over Rs. 1,00,000/- 
// From Rs. 1,51,001/- to Rs. 200,000/- 20% of the excess over Rs. 1,50,000/- 
// Above Rs. 2,00,000/- 30% of the excess over Rs. 2,00,000/- 
 
// The  input  contains  name  of  the  individual  and  income  and  the  desired  output  is  the  name  of  the 
// individual and amount of tax to be paid by the individual. 
// Create a class to represent an employee. It include the following: 
//             Data Members: 
//                        Name 
//                        Income 
//                        Tax due 
//          Member Functions: 
//                     To input data 
//                     To compute tax 
//                     To output the desired information 
// Using this class, write a program to accomplish the intended task.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Tax{
    string name;
    float income;
    float taxDue;
    public:
    void getData(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your Income: ";
        cin>>income;
    }
    inline float computeTax();
    void showData(){
        taxDue = computeTax();
        cout<<"Name: "<<name<<endl;
        cout<<"Tax Amount: "<<taxDue<<endl;
    }
};

float Tax :: computeTax(){
    if(income <= 100000){
        return 0;
    }
    else if (income > 100000 && income <= 150000)
    {
        return 0.1*(income - 100000);
    }
    else if (income > 150000 && income <= 200000)
    {
        return 0.2*(income - 150000);
    }
    else{
        return 0.3*(income - 200000);
    }
    
}

int main()
{
    Tax t;
    t.getData();
    t.showData();
    return 0;
}
