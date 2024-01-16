//C++ Control Structures, If Else and switch-case Statement.
#include <iostream>

/*
Basic Control Structres:-
1.Sequence Structure:-
Entry---->Action1------>Action2----->Exit

2.Selection Structure:-
                
Entry----->Condition-------->A1(if true)  |
                    -------->A2(if false) |
                                          |-------> Exit

3.Loop Structure:-  
Entry----->Loop----->Condition--|
      |                         |
      |                         |
      |-------------------------|

*/          


using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    
    //Selection control structure: If-Else Ladder
    if(age<18){
        int diff=18-age;
        cout<<"You can come to my party after "<<diff<<" years"<<endl;
    }

    else if(age==18){
        cout<<"You are just 18 but still you can come to my party"<<endl;
    }

    else{
        cout<<"You can definetly come to my party"<<endl;
    }
    

   //Selection control structure: Switch-Case Statement
//    switch (age)
//    {
//    case 18:
//     cout<<"Your age is 18"<<endl;
//     break;
   
//    case 25:
//     cout<<"Your age 25"<<endl;
//     break;
    
//    default:
//    cout<<"No special cases"<<endl;
//     break;
//    }
    return 0;
}