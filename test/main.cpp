#include <iostream>

using namespace std;

int main()
{
    int m = 3;
    int *p = &m;
    cout << *p<< endl;
    *p += 1;
    cout << *p;
    return 0;
}
