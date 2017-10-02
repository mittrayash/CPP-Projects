#include <iostream>
using namespace std;
class B;
class A{
    int a;
public:
    A(int x): a(x) {}
    int get_a(){return a;}
friend void compare(A, B);
};

class B{
    int b;
public:
    B(int x): b(x) {}

    int get_b(){
        return b;
    }
friend void compare(A, B);
};
void compare(A a, B b){
    int x = a.get_a();
    int y = b.get_b();
    if (x > y)
        cout << x << " is greater than " << y;
    else if (x < y)
        cout << x << " is less than " << y;
    else cout << x << "is equal to " << y;
}
int main(){
    A a1 = A(4);
    B b1 = B(3);
    compare(a1, b1);
    cout << endl;
return 0;
}
