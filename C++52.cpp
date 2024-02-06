// Array of objects using pointers in C++
#include <iostream>
using namespace std;

class Shop {
    int id;
    float price;
    public:
        void setData(int a,float b){
            id = a;
            price = b;
        }
        void displayData(){
            cout<<"Id of the item : "<<id<<endl;
            cout<<"Price of the item : "<<price<<endl;
        }
};

int main()
{
    int size = 2;
    Shop *ptr = new Shop[size];
    int p;float q;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<":";
        cin>>p>>q;
        (ptr+i)->setData(p,q);
    }
    for (int i = 0; i < size; i++)
    {
        (ptr+i)->displayData();
        cout<<endl;
    }
    
    
    return 0;
}
