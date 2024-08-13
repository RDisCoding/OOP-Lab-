#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Numbers{
    int a, b;
    public:
    void getData(){
        cout<<"Enter any two no. : ";
        cin>>a>>b;
    }

    //call by value
    void add(Numbers n){
        cout<<"Addition: "<<(n.a+n.b)<<endl;
    }

    // call by reference/pointer
    void subtract(Numbers *n){
        cout<<"Subtraction: "<<(n->a - n->b)<<endl;
    }

    //call by address
    void multiply(Numbers &n){
        cout<<"Multiplication: "<<(n.a * n.b)<<endl;
    }
};

int main()
{
    Numbers n1;
    n1.getData();
    n1.add(n1);
    n1.subtract(&n1);
    n1.multiply(n1);

    return 0;
}