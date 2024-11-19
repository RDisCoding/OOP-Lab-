#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class class_1{
    public:
    string name1;
};

class class_2{
    public:
    string name2;
    inline friend void exchange(class_1 &a,class_2 &b){
        string temp = a.name1;
        a.name1 = b.name2;
        b.name2 = temp;
    }
};

int main()
{
    class_1 a;
    class_2  b;

    a.name1 = "1";
    b.name2 = "2";

    cout<<a.name1<<endl;
    cout<<b.name2<<endl;

    exchange(a,b);

    cout<<a.name1<<endl;
    cout<<b.name2<<endl;

    return 0;
}