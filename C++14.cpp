//Structures, Unions & Enums in C++
#include <iostream>

using namespace std;

typedef/*Typedef optional*/ struct employee                 
{
    int eId;
    char favChar;
    float salary;
}ep/*use ep if you are using typedef*/;

 typedef union money                 
{
    int rice;
    char car;
    float pounds;
}mon;

int main(){
    /*or else use struct employee*/
    // struct employee sagar;
    // sagar.eId=1;
    // sagar.favChar='s';
    // sagar.salary=10000;
    // cout<<"The value is "<<sagar.eId<<endl;
    // cout<<"The value is "<<sagar.favChar<<endl;
    // cout<<"The value is "<<sagar.salary<<endl;
    

//    mon m1;
//    m1.rice = 34;
//    m1.car = 'l';
//    cout<<m1.car;

   enum Meal{breakfast,lunch,dinner};
   Meal m1=lunch;
   cout<<m1<<endl;

   cout<<breakfast<<endl;
   cout<<lunch<<endl;
   cout<<dinner<<endl;

    return 0;
}