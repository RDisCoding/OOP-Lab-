#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
    int * admno;
    float * total;

    public:
    void getData(){
        int students;
        cout<<"Enter total no. of students: ";
        cin>>students;
        admno = new int[students];
        total = new float[students];
        for(int i = 0; i<students; i++){
            cout<<"Enter admission no. and marks of students: ";
            cin>>admno[i]>>total[i];
        }
    }

    void displayTopper(){
        float maxi = 0;
        int no = 0;
        float size = sizeof(total);
        for(int i = 0; i<= size; i++){
            if(total[i]>maxi){
                maxi = total[i];
                no = admno[i];
            }   
        }
        cout<<"Topper: "<<no;
    }
};

int main()
{
    Student s;
    s.getData();
    s.displayTopper();
    return 0;
}