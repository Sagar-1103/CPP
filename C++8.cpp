//Constants, Manipulators & Operator Precedence
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    //Constants in C++
    
    // const int a =3;
    // cout<<"The value of a is "<<a<<endl;
    // // a=4;   This will give an error as we made a read only variable or a constant
    // cout<<"The value of a is "<<a<<endl;
    
    

   //Manipulators in C++
   
   int a=3,b=78,c=1223;
   cout<<"The value of a without setw is "<<a<<endl;
   cout<<"The value of b without setw is "<<b<<endl;
   cout<<"The value of c without setw is "<<c<<endl;

   cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
   cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
   cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
   

   // Operator Precedence
//    int a=3,b=4;
//    int c =a*5+b;
//    cout<<c<<endl;
//    c =a*(5+b);
//    cout<<c<<endl;

    return 0;
}