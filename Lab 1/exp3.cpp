#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Book
{
    int pageCount;
    void getData(){
        cout<<"Enter the pages: ";
        cin>>pageCount;
    }
    void displayData(){
        cout<<"Page Count: "<<pageCount<<endl;
    }
};

struct EBook
{
    string playingTime;
    void getData(){
        cout<<"Enter the time: ";
        cin>>playingTime;
    }
    void displayData(){
        cout<<"Playing Time: "<<playingTime<<endl;
    }
};

struct Publication
{
    string title, name;
    float price;
    Book b;
    EBook eb;
};

int main()
{
    // Entering details
    Publication p;
    p.name = "Daniel Carnegie";
    p.title = "How to Win Friends & Influence People";
    p.price = 500;
    p.b.getData();
    p.eb.getData();

    // Printing the details
    cout<<p.title<<endl;
    cout<<p.name<<endl;
    cout<<p.price<<endl;
    p.b.displayData();
    p.eb.displayData();
    
    return 0;
}