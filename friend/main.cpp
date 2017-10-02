#include <iostream>

using namespace std;

class Number{
    int i, j;

public:
    Number(int, int);
    friend Number add(Number, Number);
    void show();

};

Number::Number(int a, int b){
    i = a;
    j = b;
}

void Number::show(){
    cout << i << " + j" << j << endl;
}

Number add(Number p, Number q){
    Number ans(0, 0);
    ans.i = p.i + q.i;
    ans.j = p.j + q.j;

    return ans;
}


int main()
{
    Number a(2, 3);
    Number b(2, 3);

    Number C = add(a, b);
    C.show();

    return 0;
}
