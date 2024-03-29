//Copy Constructor in C++
#include <iostream>
using namespace std;

class Number {
    int a;
    public:
        Number(){
            a=0;
        };
        Number(int num){
            a = num;
        }
        //When no copy constructor is found,compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy Contructor Called."<<endl;
            a = obj.a;
        }
        void display() {
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y.
    Number z1(z),z2; // Copy constructor invoked.
    z1.display();

    z2 = z; // Copy constructor not called.
    z2.display(); 

    Number z3 = z;
    z3.display();
    return 0;
}
