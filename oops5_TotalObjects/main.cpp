#include <iostream>
#include <string>

using namespace std;
static int total = 0;
class Total{
public:
    Total(){
        total += 1;
        cout <<"obj" << total << endl;
    }
    void display(){
        cout << "Total number of objects created : " << total << endl;
    }
};
int main()
{
    Total obj1;
    Total obj2;
    Total obj3;
    Total obj4;
    obj4.display();
    return 0;
}
