// Functions Overloading in C++
#include <iostream>

using namespace std;

int sum(int a,int b){
    cout<<"Using function with 2 arguments."<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using function with 3 arguments."<<endl;
    return a+b+c;
}
int volume(double r,int h){
    return (3.14*r*r*h);
}
int volume(int a){
    return (a*a*a);
}
int volume(int l,int b,int h){
    return (l*b*h);
}
int main(){
    // cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    // cout<<"The sum of 3,7 and 6 is "<<sum(3,7,6)<<endl;

    cout<<"The volume of cylinder with radius = 10 and height = 1 is "<<volume(10,1)<<endl;
    cout<<"The volume of cube with side = 5 is "<<volume(5)<<endl;
    cout<<"The volume of cuboid with l = 2 , b = 5 , h = 6 is "<<volume(2,5,6)<<endl;
    return 0;
}