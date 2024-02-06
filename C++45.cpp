//Virtual Base Class
#include <iostream>
using namespace std;

/*
student--->Test
student--->Sports
Test--->Result
Sports--->Result
*/

class Student {
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};

class Test : virtual public Student {
    protected:
        float maths,physics;
    public:
        void set_marks(float m1,float m2){
            maths=m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"Your result is here : "
                <<"Maths : "<<maths<<endl
                <<"Physics : "<<physics<<endl;
        }
};
class Sports : virtual public Student {
    protected:
        float score;
    public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(void){
            cout<<"Your score is here : "<<score<<endl;
        }
};
class Result : public Test, public Sports {
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_marks();
            print_score();
            cout<<"Total Marks : "<<total<<endl;
        }
};

int main()
{
    Result Sagar;
    Sagar.set_number(1031);
    Sagar.set_marks(78.9,99.5);
    Sagar.set_score(9);
    Sagar.display();
    return 0;
}
