//Contructors with default arguments in C++
#include <iostream>
using namespace std;

class Simple {
    int data1,data2;
    public:
        Simple(int a,int b=9) {
            data1=a;
            data2=b;
        }
        void printNumber(void){
            cout<<"The numbers are "<<data1<<" and "<<data2<<"."<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Simple x(2);
    x.printNumber();

    Simple y(2,5);
    y.printNumber();
    return 0;
}
