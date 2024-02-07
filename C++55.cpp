// Pointers to Derived Classes in C++
#include <iostream>
using namespace std;
//Runtime Polymorphism
class BaseClass {
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass: public BaseClass {
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived Class variable var_derived "<<var_derived<<endl;
        }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    /*Late Binding - If we point the base class pointer to the derived class it wont give any error.
    But when we try to call the member functions of the derived class through the pointer the member functions 
    of the Base class will be used*/

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 25; // Will throw an error
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 11;
    derived_class_pointer->display();
    return 0;
}
