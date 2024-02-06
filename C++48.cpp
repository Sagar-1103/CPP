//Contructor in derived classs
#include <iostream>
using namespace std;

/*
CASE 1:
class B:public A {
    //Order of execution of constructor ---> first A() then B()
};

CASE 2:
class A:public B,public C {
    //Order of execution of constructor ---> first B() then C() A()
};

CASE 3:
class A:public B,virtual public C {
    //Order of execution of constructor ---> first C() then B() A()
    //virtual class has the most priority
};
*/

class Base1 {
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2 {
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base1,virtual public Base2 {
    int derived1 , derived2;
    public:
        Derived(int a,int b,int c,int d): Base2(a),Base1(b){ //Doesnt depend on this order (Only depends on the definition order)
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }

};

int main()
{
    Derived Sagar(1,2,3,4);
    Sagar.printDataBase1();
    Sagar.printDataBase2();
    Sagar.printDataDerived();
    return 0;
}

