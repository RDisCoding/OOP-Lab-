// Experiment  5:        Assume  that  a  publishing  company  markets  prints  books  and  digital  books  (electronic 
// form  –  CD’). Create a class named Publication with data members named title, price, and author’s name. 
// From Publication class, derive two classes named Book and Ebook. The Book class adds a page count data 
// member  named  pcount  while  Ebook  adds  data  member  playing  time  name  ptime.  Each  of  these  classes 
// must  have  member  function  getDatd()  to  read  class  specific  data  from  keyboard  and  displayData()  to 
// output the class specific data to the computer screen. Write a program to test these classes

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Publication{
    string title, authorName;
    float price;
    public:
    Publication(){}

    Publication(string title, float price, string author){
        this->title = title;
        this->price = price;
        this->authorName = author;
        cout<<title<<endl;
        cout<<"Rs. "<<price<<endl;
        cout<<"By "<<authorName<<endl;
    }
};

class Book : public Publication{
    int pcount;
    public:
    Book(){ //calls inherited constructor first and then executes its functions
        getData();
        displayData();
    }
    void getData(){
        cout<<"Enter the amount of pages in the book: ";
        cin>>pcount;
    }
    void displayData(){
        cout<<"Total pages in the book: "<<pcount<<endl;
    }
};

class EBook : public Publication{
    int ptime;
    public:
    EBook(){
        getData();
        displayData();
    }
    void getData(){
        cout<<"Enter the playing time of the book: ";
        cin>>ptime;
    }

    void displayData(){
        cout<<"Total play time of the book: "<<ptime<<endl;
    }
};

int main()
{
    Publication p("48 Laws Of Power", 500.00, "Robert Greene");
    Book b;
    EBook e;
    return 0;
}