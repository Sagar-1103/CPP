//Ambiguity Resolution in Inheritance in C++
#include <iostream>
using namespace std;

class Base1 {
    public:
    void greet(void){
        cout<<"How are you?"<<endl;
    }
};
class Base2 {
    public:
    void greet(void){
        cout<<"App kaise ho?"<<endl;
    }
};

class Derived : public Base1 , public Base2  {
    int a;
    public:
        void greet(){
            Base1::greet();
        }
};

class B {
    public:
        void say(){
            cout<<"Base Hello World "<<endl;
        }
};

class D : public B {
    int a;
    public:
        void say(){                      // In this case Derived class functions overwrites that of Base class
            cout<<"Derived Hello World "<<endl;
        }
};


int main()
{
    // Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    Derived derivedobj;

    cout<<endl;
    base1obj.greet();
    base2obj.greet();
    cout<<endl;
    derivedobj.greet();

    // Ambiguity 2
    B base;
    D derived;
    derived.say();
    
    return 0;
}
