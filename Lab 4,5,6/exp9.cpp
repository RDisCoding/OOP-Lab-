#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    int emp_id;
    string emp_name;
    int age;
    
    void searchEmp(int emp_id){
        cout<<"ID: "<<this->emp_id<<endl;
        cout<<"Name: "<<this->emp_name<<endl;
        cout<<"Age: "<<this->age<<endl;
    }

    void getData(){
        cout<<"Enter employee ID, Name, Age: ";
        cin>>emp_id>>emp_name>>age;
    }
};

int main()
{
    int id;
    Employee arr[10];
    for(int i=0;i<10;i++){
        arr[i].getData();
    }
    cout<<"Search ID: ";
    cin>>id;
    for(int i=0; i<10; i++){
        if(id == arr[i].emp_id){
            cout<<"Employee Found"<<endl;
            arr[i].searchEmp(id);
        }
    }
    return 0;
}