//Exercise on C++ Inheritance
#include <iostream>
using namespace std;

/*
Create 2 classes:
    1.Simple Calculator - Takes input of 2 numbers using a utility function and performs + , - , * , / and displays the results using another function.
    2.Scientific Calculator - Takes input of 2 numbers using a utility function and performs and four scientific operations of your choice and displays the results using another function.

    Create another class Hybrid Calculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of Hybrid Calculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class SimpleCalculator {
    int num1,num2;
    public:
        void simpleCalculateInput(int,int);
        void simpleCalculateOutput(void);
};

void SimpleCalculator :: simpleCalculateInput(int n1,int n2){
    num1=n1;
    num2=n2;
}
void SimpleCalculator :: simpleCalculateOutput(void){
    cout<<"The addition of numbers : "<<num1+num2<<endl;
    cout<<"The subtraction of numbers : "<<num1-num2<<endl;
    cout<<"The multiplication of numbers : "<<num1*num2<<endl;
    cout<<"The division of numbers : "<<num1/num2<<endl;
}

class ScientificCalculator {
    int num1,num2;
    public:
        void scientificCalculatorInput(int,int);
        void scientificAddition(void);
        void scientificSubtraction(void);
        void scientificMultiplication(void);
        void scientificDivision(void);
};

void ScientificCalculator :: scientificCalculatorInput(int n1,int n2){
    num1=n1;
    num2=n2;
}
void ScientificCalculator :: scientificAddition(void){
    cout<<"The addition of numbers : "<<num1+num2<<endl;
}
void ScientificCalculator :: scientificSubtraction(void){
    cout<<"The subtraction of numbers : "<<num1-num2<<endl;
}
void ScientificCalculator :: scientificMultiplication(void){
    cout<<"The multiplication of numbers : "<<num1*num2<<endl;
}
void ScientificCalculator :: scientificDivision(void){
    cout<<"The division of numbers : "<<num1/num2<<endl;
}

class HybridCalculator : public SimpleCalculator , public ScientificCalculator {
        
};

int main()
{
    HybridCalculator Cal1;

    cout<<endl;
    cout<<"Simple Calculator : "<<endl;
    Cal1.simpleCalculateInput(6,5);
    Cal1.simpleCalculateOutput();
    cout<<endl;
    cout<<"Scientific Calculator : "<<endl;
    Cal1.scientificCalculatorInput(7,6);
    Cal1.scientificAddition();
    Cal1.scientificMultiplication();
    return 0;
}
