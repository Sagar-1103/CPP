// Nesting of member functions in C++
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);
public:
    void read(void);
    void onesComp(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format.";
            exit(0);
        }
    }
}
void binary ::onesComp(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout<<s<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.onesComp();
    b.display();
    return 0;
}