#include <iostream>

using namespace std;

template <class T>
    T square(T a){
        return a*a;
    }
    string square(string a){
        return (a+a);
    }

int main()
{
    int a = 4;
    int ans1 = square(a);
    cout << ans1 << endl;

    float b = 4.1;
    float ans2 = square(b);
    cout << ans2 << endl;

    string c = "Hi! ";
    string ans3 = square(c);
    cout << ans3 << endl;

    return 0;
}
