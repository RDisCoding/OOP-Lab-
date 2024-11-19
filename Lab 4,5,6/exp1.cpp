// Experiment 1: 
// An employer plans to pay a bonus to employees. A bonus of 10% is to be paid to employees with earning 
// at least Rs. 2000/- of the earning to others. The input contains name and earning of an employee and the 
// desired output is name and bonus to be paid to the employee. 
// Create a class to represent an employee. It should include the following: 
//         Data Members: 
//                    Name 
//                     Earning 
//                     Bonus 
//        Member Functions: 
//                  To input data 
//                  To compute bonus 
//                  To output the desired information 
// Using this class, write a program to accomplish the intended task.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Employee{
    string name;
    float salary;
    public:
    inline float bonus();
        void getData(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your salary: ";
            cin>>salary;
        }
        void displayData(){
            cout<<"Name: "<<name<<endl;
            if(bonus()){
            cout<<"Bonus: "<<bonus()<<endl;
            }
            else{
                cout<<"No Bonus";
            }
        }

};

float Employee:: bonus(){
    if(salary >= 2000 ){
        return 0.1*salary;
    }
    else{
        return 0;
    }
}

int main()
{
    Employee emp;
    emp.getData();
    emp.displayData();
    return 0;
}