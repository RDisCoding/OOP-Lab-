#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Library{
    public:
    string current_date;
    int days;
    
    void getData(){
        cout<<"Enter the book's issue date (dd-mm-yyyy): ";
        cin>>current_date;
        cout<<"Enter the no of days in which the book is due: ";
        cin>>days;
    }

    inline string dateCalculator();
};

int oddMonth(int month, int year, int days, int date = 1){
    int remainingDays = date + days - 31;
    if(remainingDays > 0){
        month++;
        if(month == 2){
            february(month, year, remainingDays);
        }
        else{
            evenMonth(month, year, remainingDays);
        }
    }
    else{
        int newDate = date + days -1;
        return newDate;
    }
}

int evenMonth(int month, int year, int days, int date = 1){
    int remainingDays = date + days - 30;
    if(remainingDays > 0){
        month++;
        if(month > 12){
            month = 1;
            year++;
        }
        if(month == 2){
            february(month, year, remainingDays);
        }
        else{
            oddMonth(month, year, remainingDays);
        }
    }
    else{
        int newDate = date + days;
        return newDate;
    }
}

int february(int month, int year, int days, int date = 1){
    int remainingDays;
    if(year%4==0 && year%100!=0 || year%400==0){
    remainingDays = date + days - 29;
    }
    else{
    remainingDays = date + days - 28;
    }
    if(remainingDays > 0){
        month++;
        oddMonth(month, year, remainingDays);
    }
    else{
        int newDate = date + days;
        return newDate;
    }
}

string Library :: dateCalculator(){
    int date = stoi(current_date.substr(0,2));
    int month = stoi(current_date.substr(3,2));
    int year = stoi(current_date.substr(6,4));

    int dueDate = (month%2)?evenMonth(month, year, days, date) : oddMonth(month, year, days, date);
    cout<<dueDate;

}

int main()
{
    Library lib;
    lib.getData();
    lib.dateCalculator();
    return 0;
}