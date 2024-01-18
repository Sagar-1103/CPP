// Friend Classes & Member Friend Functions in C++
#include <iostream>

using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealPart(Complex, Complex);
    int sumImaginaryPart(Complex, Complex);
};
class Complex
{
    int a, b;
    //Individually declaring functions as friends
    // friend int Calculator ::sumRealPart(Complex o1, Complex o2);
    // friend int Calculator ::sumImaginaryPart(Complex o1, Complex o2);

    //Declaring the entire calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout <<a << " + " << b << "j" << endl;
    }
};

int Calculator ::sumRealPart(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumImaginaryPart(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex a,b;
    Calculator c;
    int realSum,imSum;
    a.setNumber(1,2);
    b.setNumber(5,6);
    a.printNumber();
    b.printNumber();
    realSum = c.sumRealPart(a,b);
    imSum = c.sumImaginaryPart(a,b);
    cout<<"Real part: "<<realSum<<endl<<"Imaginary part: "<<imSum<<endl;
    return 0;
}
