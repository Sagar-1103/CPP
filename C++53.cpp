// this Pointer in C++
#include <iostream>
using namespace std;

class A {
    int a;
    public:
        void setData(float a){
        // A & setData(float a){
            // a=a; //if we do like this both the represents the local "a" which is given as a parameter
            this->a = a;
            // return *this; 
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main()
{
    //this is a keyword which is a pointer to the object which invokes the member fucntion
    A a;
    a.setData(6);
    a.getData();
    // a.setData(4).getData();
    return 0;
}
