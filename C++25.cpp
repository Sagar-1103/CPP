// Array of objects and passing objects as function arguments in C++.
#include <iostream>
using namespace std;

class Employee {
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter the id of the employee: ";
            cin>>id;
        }
        void getId(void){
            cout<<"The id of this employee is "<<id<<endl;
        }
};

int main()
{
    // Employee ved,sagar,paras;
    // sagar.setId();
    // sagar.getId();

    Employee fb[2];
    for (int i = 0; i < 2; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
   
    return 0;
}