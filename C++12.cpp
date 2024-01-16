//Pointers in C++
#include <iostream>

using namespace std;
int main(){
    //Pointer---> Data type which holds the address of other datatypes
    int a=3;
    int *b=&a;
    //&--->(Address of) Operator
    //*--->(Value at)Dereference Operator

    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The value at address of b is "<<a<<endl;
    cout<<"The value at address of b is "<<*b<<endl;

    //Pointer to pointer
    int **c=&b;
    cout<<"Address of b is "<<c<<endl;
    cout<<"Address of b is "<<&b<<endl;
    cout<<"The value at address of c is "<<*c<<endl;
    cout<<"The value at address of c is "<<b<<endl;
    cout<<"The value at address  value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}