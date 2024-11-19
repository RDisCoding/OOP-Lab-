// Write  a  program  to  find  mean  of  two  numbers  belonging  to  two  different  classes  using 
// friend function.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Two;

class One {
    public:
    int a;
    One(){
        cout<<"Enter first number: ";
        cin>>a;
    }
    friend class Two;
    // friend void average(One &o, Two &t);
};

class Two {
    public:
    int a;
    // One o;
    Two(){
        cout<<"Enter second number: ";
        cin>>a;
    }
    friend void average(One &o, Two &t);
};

void average(One &o, Two &t){
    int av = (o.a + t.a)/2 ;
    cout<<"Average: "<<av;
}

int main()
{
    One one;
    Two two; //takes first number's input again as the class object is created in this class
    average(one, two);

    // Two two;
    // average(two.o, two);
    return 0;
}