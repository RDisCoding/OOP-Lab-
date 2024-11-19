// Write  a  C++  Program  to  implement  the  arithmetic  operations  multiplication  on  complex 
// numbers using the concept of this pointer, inline functions and scope resolution operator

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real1,imag1;
    Complex(int a, int b){
        real1 = a;
        imag1 = b;
    }
    inline friend void multiplication(Complex *c1, Complex *c2);
};

void multiplication(Complex *c1, Complex *c2){
    cout<<"Multiplication of "<<c1->real1<<" + "<<c1->imag1<<"i and "<<c2->real1<<" + "<<c2->imag1<<"i results in: "<<c1->real1*c2->real1 - (c1->imag1*c2->imag1)<<endl;
}

int main()
{
    Complex c1(3,4);
    Complex c2(5,6);

    multiplication(&c1, &c2);
    return 0;
}