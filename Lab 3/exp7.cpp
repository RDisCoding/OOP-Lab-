#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Overload{
    int size = 0;
    int * arr;
    public:
    Overload(){
        cout<<"THis is the default constructor";
    }

    Overload(int size){
        this->size = size;
        arr = new int[size];
        getData();
    }

    inline void getData(){
        int maxi = 0;
        for(int i = 0; i< size; i++){
            cout<<"Enter element "<<i+1<<": ";
            cin>>arr[i];
        }
        for(int i = 0; i< size; i++){
            maxi = max(maxi, arr[i]);
        }
        cout<<"The largest element is: "<<maxi;
    }

};

int main()
{
    Overload o1(5);
    return 0;
}