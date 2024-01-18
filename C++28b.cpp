#include <iostream>
using namespace std;

class C2;
class C1 {
    int val1;
    friend void exchange(C1 &,C2 &);
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};
class C2 {
    int val2;
    friend void exchange(C1 &,C2 &);
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};

void exchange(C1 &x,C2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    C1 a;
    C2 b;

    a.indata(6);
    b.indata(11);

    cout<<"Value of a before Swapping: ";
    a.display();
    cout<<"Value of b before Swapping: ";
    b.display();
    exchange(a,b);
    cout<<"Value of a after Swapping: ";
    a.display();
    cout<<"Value of b after Swapping: ";
    b.display();
    return 0;
}
