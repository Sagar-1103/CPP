// C++ Objects Memory Allocation & using Arrays in Classes.
#include <iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){counter =0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void){
    cout<<"Enter Id of your Item No. - "<<counter+1<<" : ";
    cin>>itemId[counter];
    cout<<"Enter Price of your Item: ";
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price item with Id:"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
   Shop dukaan;
   dukaan.initCounter();
   dukaan.setPrice();
   dukaan.setPrice();
   dukaan.setPrice();
   dukaan.displayPrice();
    return 0;
}