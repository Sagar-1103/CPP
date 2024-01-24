//Contructor Overloading
#include <iostream>
using namespace std;

class Complex {
    int a,b;
    public:
        Complex(int x,int y){
            a = x;
            b = y;
        }
        Complex(int x){
            a=x;
            b=0;
        }
        Complex(){
            a=0;
            b=0;
        }
        void printNumber(void){
            cout<<"Your number is "<<a<<" + "<<b<<"j"<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Complex c1(4,6);
    c1.printNumber();
    
    Complex c2(4);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
