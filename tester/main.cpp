#include <iostream>

using namespace std;


class Test{
public:
    int r, i;
public:

    void show(Test a){
    cout << a.r << " + j" << a.i << endl;
    }
    Test(int, int);
    friend void add();
    ~Test();
    };

Test::Test(int real,int img){
    r = real;
    i = img;
}
Test::~Test(){
cout <<"This is me"<<endl;;
}

void add(Test a, Test b){
    Test ans(0, 0);
    ans.r = a.r + b.r;
    ans.i = a.i + b.i;
    ans.show(ans);
}
void prnt (char* c){
cout << c;
}


int main()
{
    Test a(2, 3);
    Test b(2, 3);

    add(a, b);
    prnt("asd");

    return 0;
}
