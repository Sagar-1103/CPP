// Single Inheritance (private)
#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

class Derived : private Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1(void)
{
    return data1;
}
int Base ::getData2(void)
{
    return data2;
}

void Derived :: process(void){
    setData();
    data3 = data2*getData1();
}
void Derived :: display(void){
    cout<<"The value of data1 : "<<getData1()<<endl;
    cout<<"The value of data2 : "<<data2<<endl;
    cout<<"The value of data3 : "<<data3<<endl;
}

int main()
{
    Derived Der;
    // Der.setData();
    Der.process();
    Der.display();
    return 0;
}
