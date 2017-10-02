#include <iostream>

using namespace std;

int power(int x, int n){
    int number = x, po = n, ans;

    if(po == 0){
        ans = 1;
    }
    else{
        ans = x * power(number, n-1);
    }
    return ans;
}

int main()
{
    int an = power(2, 4);
    cout << an;
    return 0;
}
