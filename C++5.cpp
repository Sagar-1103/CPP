//Basic I/O & More
#include <iostream>
//Stream-Sequence of bits

using namespace std;
int main(){

    int a,b;
    // << is called insertion operator
    cout<<"Enter the value of a:";
    // >> is called extraction operator
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"The sum is "<<a+b;

    return 0;
}