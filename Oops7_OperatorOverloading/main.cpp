#include <iostream>
using namespace std;
class Overload{
    int x = 0;
    public:
    void operator ++(){
        cout << "(PRE)Increments value of x" << endl;
        cout <<"Old x = " << x << endl;
        ++x;
        cout << "New x = " << x << endl;
    }
    void operator ++(int){
        cout << "(POST)Increments value of x" << endl;
        cout <<"Old x = " << x << endl;
        x++;
        cout << "New x = " << x << endl;
    }
};
int main()
{
    Overload obj;
    ++obj;
    cout << "------------------------------------" << endl;
    obj++;
    return 0;
}
