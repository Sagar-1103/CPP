// Classes,Public and Private access modifiers in C++
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    };
};

class Operations
{
    private:
        int a,b;
    public:
        int sum(int a,int b);
        int sub(int a,int b);
};

int Operations :: sum(int a1,int b1){
    return a1+b1;
}

int Operations :: sub(int a1,int b1){
    return a1-b1;
}

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee sagar;
    // sagar.a=3; //member "Employee::a" is inaccessible
    sagar.setData(1, 2, 4);
    sagar.d = 6;
    sagar.e = 11;
    sagar.getData();

    Operations data;
    int result = data.sum(6, 5);
    cout << result << endl;
    result = data.sub(6, 5);
    cout << result << endl;
    return 0;
}