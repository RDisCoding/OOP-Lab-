#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Data {
    int day;
    int month;
    int year;
    public:
        Data(){
        day = 12;
        month = 3;
        year = 1993;
        }

        Data(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }

        Data(Data &d){
            day = d.day;
            month = d.month;
            year = d.year;
        }

        void show(){
        cout << "Day: " << day << ", Month: " << month << ", Year: " << year << endl;
        }
};

int main() {
    // Default Constructor
    Data d1;
    d1.show();

    // Parametrized Constructor
    Data d2(19, 9, 2004);
    d2.show();

    // Copy Constructor
    Data d3(d2);
    d3.show();
    return 0;
}
