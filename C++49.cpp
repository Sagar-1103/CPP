//Initialization List in Constructors
#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section 
{
    assignment + other code;
}

class Test {
    int a;
    int b;
    public:
        Test(int i,int j):a(i),b(j){constructor-body}
};

*/

class Test {
    int a;
    int b;
    public:
        // Test(int i,int j):a(i),b(j){
        // Test(int i,int j):a(i),b(i+j){
        // Test(int i,int j):a(i),b(2*j){
        // Test(int i,int j):a(i),b(a+j){
        // Test(int i,int j):b(i),a(b+j){   ------> This will throw an error since a is initialized first then b.
        // Test(int i,int j):a(i) {b=j;}   
        // Test(int i,int j) {a=i;b=j;}   
        Test(int i,int j):a(i),b(i+j){
            cout<<"Constructor executed"<<endl;
            cout<<"The value of i and j are "<<a<<" and "<<b<<endl;
        }
};

int main()
{
    Test Sagar(4,6);
    return 0;
}
