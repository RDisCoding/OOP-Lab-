#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class vector{
    int *arr;
    int size;

    public:
    vector(int n) : size(n) {
        arr = new int[size];
    }

    friend void operator >>(istream &mycin, vector &v){
        mycin>>v.arr;
    }
};

int main()
{
    
    return 0;
}