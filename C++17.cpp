//Inline Functions,Default Arguements & Constant Arguements in C++
#include <iostream>

using namespace std;

inline int product(int a,int b){
    /*Not recommended to use the below lines with inline functions
    static int c=0; //This executes only once
    c=c+1;//Next time this function runs , the value of  c will be retianed*/
    return a*b;
}


float moneyRecieved(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}

int strlen(const char *p){
    //value of p cant be changed in this function.
}

int main(){

    // int a,b;
    // cout<<"Enter the value of a and b:";
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money=1000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyRecieved(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyRecieved(money,1.10)<<" Rs after 1 year"<<endl;
   
    return 0;
}