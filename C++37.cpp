#include <iostream>
using namespace std;

//Base Class
class Employee {
    public:
        int id;
        float salary;
        Employee(){};
        Employee(int inpId){
            id=inpId;
            salary = 34.0;
        };
};

//Derived Class
// class {{derived-class-name}} : {{visibility-mode}} {{base-classs-name}}
//Default visibility mode is private.
//Private Visibility Mode - Public members of base class become private members of the derived class
//Public Visibility Mode - Public members of base class become public members of the derived class

//Private members of the base class cannot be inheritied
class Programmer : Employee {
    public:
        int languageCode;
        Programmer(int inpId){
            id = inpId;
            languageCode = 9;
        };
        void getData(void){
            cout<<id<<endl;
        };
};

int main()
{
    Employee Sagar(1),Ved(2);
    cout<<Sagar.id<<" : "<<Sagar.salary<<endl;
    cout<<Ved.id<<" : "<<Ved.salary<<endl;

    Programmer Paras(3);
    Paras.getData();
    // cout<<Paras.id<<endl;//Gives error as we are inheriting the Employee class in Private Visibility Mode
    cout<<"Language Code :  "<<Paras.languageCode<<endl;
    return 0;
}
