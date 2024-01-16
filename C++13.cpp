//Arrays and Pointers Arithmetic
#include <iostream>

using namespace std;
int main(){

    // int marks[4]={23,45,67,89};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // //We can change the value of an array
    // marks[3]=55;
    // cout<<marks[3]<<endl;
    

//    int marks[3];
//    for (int  i = 0; i < 3; i++)
//    {
//     cin>>marks[i];
//    }
   
//    for (int i = 0; i < 3; i++)
//    {
//     cout<<"The value of array at position "<<i<<" is "<<marks[i]<<endl;
//    }
   

    // Pointer Artihmetic ----> address(new) = address(current) + i * sizeof(datatype)
    
    int total[]={4,6,5,3};
    int *p = total;

    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The address of marks["<<i<<"] is "<<(p+i)<<endl;
        cout<<"The value of marks["<<i<<"] is "<<*(p+i)<<endl;
    }
    

    return 0;
}