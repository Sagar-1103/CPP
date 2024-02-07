//Virtual Functions in C++
#include <iostream>
using namespace std;
//Run Time Polymorphism
class BaseClass {
    public:
        int var_base=1;
        virtual void display(){ // if we remove virtual then whenever we call display in derived class this display will be invoked
            cout<<"1 : Displaying Base Class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass: public BaseClass {
    public:
        int var_derived=2;
        void display(){
            cout<<"2 : Displaying Base Class variable var_base "<<var_base<<endl;
            cout<<"2 : Displaying Derived Class variable var_derived "<<var_derived<<endl;
        }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}
