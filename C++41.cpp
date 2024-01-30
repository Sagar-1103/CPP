//Multiple Inheritance in C++
#include <iostream>

using namespace std;

class Base1 {
    protected:
        int base1int;
    public:
        void set_base1int(int i){
            base1int = i;
        }
};

class Base2 {
    protected:
        int base2int;
    public:
        void set_base2int(int i){
            base2int = i;
        }
};

class Derived : public Base1 , public Base2 {
    public:
        void show(void){
            cout<<"The value of base1int is "<<base1int<<endl;
            cout<<"The value of base2int is "<<base2int<<endl;
            cout<<"The sum of base1int and base2int is "<<base1int+base2int<<endl;
        }
};

/*The inherited derived class will look something like this:
Data Members
    base1int ---> Protected
    base2int ---> Protected
Member Functions
    set_base1int() ---> Public
    set_base2int() ---> Public
    show()         ---> Public
*/

int main()
{
    Derived sagar;
    sagar.set_base1int(5);
    sagar.set_base2int(6);
    sagar.show();
    return 0;
}
