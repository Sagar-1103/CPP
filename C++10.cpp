//For,While and do-while loops in C++
#include <iostream>

using namespace std;
int main(){
    /*Loops in C++
    1.For loop
    2.While Loop
    3.Do-While loop
    */

    /*For loop in C++*/
    //Syntex for for loop
    /*for(initialization; condition,updation)
    {
        loop body   
    }*/

    /*for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
    }
    */
   /*Infinite for Loop
    for (int i = 0; i >=0; i++)
    {
        cout<<i<<endl;
    }
    */

   /*While loop in C++*/
    /*Syntex
    while(condition)
    {
        C++ statements;
    }
    */
   
   int i=1;
   while (i<=6)
   {
    cout<<i<<endl;
    i++;
   }
    

   //Infinite while Loop
   /*int i=1;
   while (i>0)
   {
    cout<<i<<endl;
    i++;
   }
   */   

  /*do loop in C++*/
    /*Syntex:
    do 
    {
        C++ Statement;
    }while(condition);
    */

   /*
   int i=1;
   do
   {
    cout<<i<<endl;
    i++;
   } while (i<40);*/

   //Printing Multiplication Table
   
//    int a;
//    cout<<"Enter the number:";
//    cin>>a;
//    int i=1;
//    int m;
//    do
//    {
//     m=a*i;
//     cout<<a<<" x "<<i<<" = "<<m<<endl;
//     i++;
//    } while (i<=10);
   
    return 0;
}