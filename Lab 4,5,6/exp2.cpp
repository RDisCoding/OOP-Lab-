// Experiment 2.       
//           The monthly telephone bill is to be computed as follows: 
//           Minimum Rs. 200 for upto 100 calls 
//           Plus Rs. 0.60 per call for next 50 calls 
//           Plus Rs. 0.50 per call for next 50 calls 
//           Plus Rs. 0.40 per call for any call beyond 200 calls. 
// The  input  contains  name  of  the  customer  and  number  of  calls  made  and  the  desired  output  is  the  name 
// and telephone bill to be paid by the customer. 
// Create a class to represent an employee. It should include the following: 
//          Data Members: 
//                    Name  
//                    Number of calls 
//                    Bill amount 
//         Member Functions: 
//                        To input data 
//                        To compute bill 
//                        To output the desired information 
// Using this class, write a program to accomplish the intended task.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class bill{
    string name;
    int calls;
    float total;
    public:
    void Input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter the number of calls: ";
        cin>>calls;
    }

    void computeBill(){
        if(calls <= 150){
            total = 200 + (calls-100)*0.6;
        }
        else if (calls >150 && calls <=200)
        {
            total = 200 + 50 * 0.6 + (calls-150) * 0.5;
        }
        else if (calls > 200)
        {
            total = 200 + 30 + 25 + (calls-200)*0.4;
        }
    }

    void Output(){
        computeBill();
        cout<<name<<endl;
        cout<<"Total amount to be paid: "<<total;
    }

};

int main()
{
    bill b;
    b.Input();
    b.Output();
    return 0;
}