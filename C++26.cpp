//Friend Functions in C++
#include <iostream>

using namespace std;
class Complex{
    int a,b;
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"j"<<endl;
        }
        friend Complex sumComplex(Complex o1,Complex o2); // sumComlex func is not a member function of this class.
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber(o1.a+o2.a,o1.b+o2.b);
    return o3;
}

int main()
{
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);

    c1.printNumber();
    c2.printNumber();

    // c1.sumComplex() // Will throw an error.
    sum = sumComplex(c1,c2);
    cout<<"Sum : ";
    sum.printNumber();
    return 0;
}


/*
Properties of Friend Function
1. Not in the scope of the class.
2. Since it is not in the scope of the class,it cannot be called from the object of that class.(  c1.sumComplex() is invalid  )
3. Can be invoked without the help of any object.
4. Usually contains objects as arguments.
5. Can be declared inside public and private section of the class.
6. It cannot access any member directly by their names and need object_name.member_name to access any member.
*/