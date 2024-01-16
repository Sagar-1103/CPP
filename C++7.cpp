//C++ Reference Variables & Typecasting
#include <iostream>

using namespace std;

int c=45;
int main(){
    //------------------Build in Datatypes------------
    
    // int a,b,c;
    // cout<<"Enter the value of a :";
    // cin>>a;
    // cout<<"Enter the value of b :";
    // cin>>b;
    // c=a+b;
    // cout<<"The value of c is "<<c<<endl;
    // cout<<"The global value of c is "<<::c<<endl;// :: ----> Scope Resolution Operator - to use value of global on top of local

    //------------------float , double and long double literals------------
    
    // float d=34.4f;
    // long double e = 34.4l;
    // //  34.4 - by default is double/
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    

    //------------------Referance Variables------------
    
    
    // int x=6;
    // int &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    // y = 10;
    // cout<<x<<endl;
    // cout<<y<<endl;
    

    //-------------------Typecasting---------------------
    int a=45;
    float b=45.55;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    int c=int(b);
    cout<<"The vaue of c is "<<c<<endl;

    cout<<"The expresion is "<<a+b<<endl;
    cout<<"The expresion is "<<a+int(b)<<endl;
    cout<<"The expresion is "<<a+(int)b<<endl;
    return 0;
}