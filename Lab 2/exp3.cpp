#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Data {
private:
    int day;
    int month;
    int year;

public:
    // Zero argument constructor
    Data() : day(12), month(3), year(1993) {}

    // Parameterized constructor with default values
    Data(int d = 12, int m = 10, int y = 2000) : day(d), month(m), year(y) {}

    // Copy constructor
    Data(const Data& other) : day(other.day), month(other.month), year(other.year) {}

    // Method to display the date
    void display() const {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    // Using zero argument constructor
    // Data date1;
    // date1.display();

    Data date2(5, 6, 2022);
    date2.display();

    // Using parameterized constructor with default values
    // Data date3;
    // date3.display();

    // Using copy constructor
    Data date4 = date2;
    date4.display();

    return 0;
}
