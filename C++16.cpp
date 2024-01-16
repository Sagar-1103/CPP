//Call by value and Call by reference in C++
#include <iostream>

using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}

//Call by value
void swap(int a,int b){//This will not swap a and b
    int  temp = a;
    a=b;
    b=temp;
}
\
//Call by reference
void swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//Call by reference using C++ reference variables
void swapReferenceVar(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}

int main(){
    int a=4,b=5;
    //cout<<"sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The value of old a is "<<a<<endl;
    cout<<"The value of old b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of new a is "<<a<<endl;
    cout<<"The value of new b is "<<b<<endl;
    swapPointer(&a,&b);
    cout<<"The value of new a is "<<a<<endl;
    cout<<"The value of new b is "<<b<<endl;
    swapReferenceVar(a,b);
    cout<<"The value of new a is "<<a<<endl;
    cout<<"The value of new b is "<<b<<endl;

    return 0;
}