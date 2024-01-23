// Constructors in C++

/*Contructor is a special member function with the same name as of the class.
It is automatically invoked.Whenever an object is created.
It is used to initialize the object of its class*/
#include <iostream>
using namespace std;

class Complex {
    int a,b;
    public:
    //Creating  a Contructor
    Complex(void); //Contructor declaration
    void printNumber()
    {
        cout<<"The number is "<< a <<" + "<<b<<"j"<<endl;
    }
};

Complex :: Complex(void) {  // Default Constructor as it takes no parameter.
    a=10;
    b=5;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

/*Properties of contructors.
1) It should be declared in the public section of the class.
2) They are automatically invoked whenever the object is created.
3) They cannot return values and do not have return types. 
4) It can have default arguments.
5) We cannot refer to their address.
*/
