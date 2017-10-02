#include <iostream>
using namespace std;

class Base{
public:
    Base(){
    cout << "I'm the Base Class!" << endl;
    }
};

class Derived: public Base{
public:
    Derived(){
    cout << "I'm the Derived Class!" << endl;
    }
};

int main()
{
    Derived d1;
    return 0;
}
