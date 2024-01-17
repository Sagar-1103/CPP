// Static data members and methods in C++.
#include <iostream>
using namespace std;

// int count=1; // This also works
class Employee {
    int id;
    static int count;//Syntax Error
    // static int count=100;//Syntax Error
    public:
        void setData(void){
            cout<<"Enter the Id: ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is "<<id<<" and this the epmployee number : "<<count<<endl;
        }
        static void getCount(void) {
            cout<<"The value of count is "<<count<<endl;
        }

};

int Employee :: count;//Default value is zero
// int Employee :: count=100; // Can also be used.


int main()
{
   Employee sagar,ved,paras;
   sagar.setData();
   sagar.getData();
   Employee::getCount();

   ved.setData();
   ved.getData();
   Employee::getCount();

   paras.setData();
   paras.getData();
   Employee::getCount();
    return 0;
}