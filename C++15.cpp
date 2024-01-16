// Fuctions and Function Prototypes in C++ 
#include <iostream>

using namespace std;

//function prototype
//type function-name (arguements);
int sum(int, int); // int sum(int,int);
void greet();
int main(){
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum of the numbers is "<<sum(num1,num2);
    greet();
    return 0;
}
int sum(int a,int b){
    //a and b are formal parameters
    int c = a+b;
    return c;
}

void greet(){
    cout<<endl<<"Hello"<<endl;
}