#include <iostream>
using namespace std;
class Overloading{
    int area = 0, len, bre, rad;
public :
    void func(int x){

        cout << "Function with one parameter(int): SQUARE" <<endl;
        cout << "Side of square : " << x << endl;
        cout << "Area of the square: " << x*x << endl;
    }
    void func(double x){

        cout << "Function with one parameter (float): CIRCLE" <<endl;
        cout << "Radius = "  << x << endl;
        cout << "Area of the circle: " << 3.14*x*x << endl;
    }
    void func(int x, int y){
        len = x;
        bre = y;
        cout << "Function with two parameters: RECTANGLE" <<endl;
        cout << "Length = " << x << endl << "Breadth = " << y << endl;
        cout << "Area of the rectangle " << len*bre << endl;
    }
};
int main(){
    Overloading obj;
    obj.func(2);
    cout << endl;
    obj.func(3.4);
    cout << endl;
    obj.func(2, 3);
    return 0;
}
