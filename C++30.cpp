//Parameterized and Default Constructrs in C++
#include <iostream>

using namespace std;
class Complex {
    int a,b;
    public:
    //Creating  a Contructor
    Complex(int,int); //Contructor declaration
    void printNumber()
    {
        cout<<"The number is "<< a <<" + "<<b<<"j"<<endl;
    }
};

Complex :: Complex(int x,int y) {  // Parameterized Constructor as it accepts parameter.
    a=x;
    b=y;
}

int main()
{
    // Implicit Call
    Complex c(5,6);
    c.printNumber();

    // Explicit Call
    Complex d = Complex(1,2);
    d.printNumber();
    return 0;
}
