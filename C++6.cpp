//Operators & Header Files
// There are two types of header files:
// 1. System header files: It comes with the compiler.
#include <iostream>
// 2. User defined header files: It is written by the programmer.
// #include "this.h" ---> This will produce an error if this.h is not present in the current directory.

using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    //Arithmetic Operators
    cout<<"The value of a+b is "<<a+b<<endl; 
    cout<<"The value of a-b is "<<a-b<<endl; 
    cout<<"The value of a*b is "<<a*b<<endl; 
    cout<<"The value of a/b is "<<a/b<<endl; 
    cout<<"The value of a%b is "<<a%b<<endl; 
    cout<<"The value of a++ is "<<a++<<endl; 
    cout<<"The value of a-- is "<<a--<<endl; 
    cout<<"The value of ++a is "<<++a<<endl; 
    cout<<"The value of --a is "<<--a<<endl; 
    cout<<endl;
    

    //Assignment Operators
    // int a=3,b=9;
    // char d= 'd';

    //Comparison Operators
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"The value of a==b and a<b logical operator is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of a==b or a<b logical operator is "<<((a==b)||(a<b))<<endl;
    cout<<"The value of a==b not logical operator is "<<(!(a==b))<<endl;

    
    return 0;
}