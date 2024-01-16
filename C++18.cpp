// Recursions and Recursive Functions in C++
#include <iostream>

using namespace std;

int Factorial(int number){
    if (number==0||number==1)
    {
        return 1;
    }
    return (number)*Factorial(number-1);
}

int Fibonnaci(int index) {
    if(index == 0 || index ==1) {
        return index;
    }
    return Fibonnaci(index-1)+Fibonnaci(index-2);
    
}

int main(){
    //Factorial of a number.
    // int num;
    // cout<<"Enter the number whose factorial needs to be calculated:";
    // cin>>num;
    // int result = Factorial(num);
    // cout<<"The factorial of "<<num<<" is "<< result <<"."<<endl;

    //Fibonnaci
    int index;
    cout<<"Enter the number whose fibonacci needs to be calculated: ";
    cin>>index;
    int result = Fibonnaci(index);
    cout<<"The fibonacci of "<<index<<" is "<< result <<"."<<endl;
    return 0;
}