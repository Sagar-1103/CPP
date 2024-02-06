// Pointers to Objects and Arrow Operator in C++
#include <iostream>
using namespace std;

class Complex {
    int real,imaginary;
    public:
        void getData(){
            cout<<"The complex number is "<<real<<" + "<<imaginary<<"j"<<endl;
        }
        void setData(int a,int b){
            real = a;
            imaginary = b;
        }
};

int main()
{
    Complex c1;
    // Complex *ptr = &c1; //Also works
    Complex *ptr = new Complex;
    // Complex *ptr = new Complex[3]; //Also works
    (*ptr).setData(5,6);
    ptr->getData(); // use parenthesis as dot operator has higher precedence than star

    return 0;
}
