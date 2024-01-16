//Variable Scope & Data Types
#include <iostream>

using namespace std;
// int,float,char,double,boolean - built-in datatypes
// struct,union,enum - user defined datatypes
// array,function,pointer - derived datatypes 
int glo = 11;
int code(int a,int glo){
    a=44;
    cout<<"\nThe value of a is "<<a;
    cout<<"\nThe value of glo is "<<glo<<"\n";
    return 0;
}
int main(){
    int a=4, b=5;
    float pi=3.14;
    bool apple=true;
    bool ball=false;
    int glo = 22;
    cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi<<"";
    code(a,glo);
    cout<<apple<<" "<<ball;
    
    return 0;
}