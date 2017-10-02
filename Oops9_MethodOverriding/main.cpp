#include <iostream>

using namespace std;

class Base{
public:
    void show(){
        cout << "I am in base class!" << endl;
    }
};
class Derived : public Base{
public:


    void show(){
        cout <<"I am in derived class!" << endl;
    }
};
int main()
{
    Derived obj;
    obj.show();
    obj.Base::show();
    obj.Derived::show();

    return 0;
}
