//Multilevel Inheritance in C++
#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
}
void Student :: get_roll_number(void){
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam : public Student {
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam :: set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void Exam :: get_marks(void){
    cout<<"Maths marks : "<<maths<<endl;
    cout<<"Physics marks : "<<physics<<endl;
}

class Result : public Exam {
    float percentage;
    public:
        void display_result(void);
};

void Result ::  display_result(void){
    float total_marks = 200;
    percentage = ((maths+physics)/total_marks)*100;
    get_roll_number();
    get_marks();
    cout<<"The percentage is "<<percentage<<"%"<<endl;
}

int main()
{
    Result Sagar,Ved;
    Sagar.set_roll_number(1031);
    Sagar.set_marks(50,50);
    Sagar.display_result();
    cout<<endl;
    Ved.set_roll_number(1040);
    Ved.set_marks(90,80);
    Ved.display_result();

    return 0;
}
/*
-----------Notes:---------------
If we are inheriting B from A and C from B:[A--->B--->C]
1. A is the base class for B and B is the base class for C.
2. A--->B--->C is called Inheritance Path.
*/