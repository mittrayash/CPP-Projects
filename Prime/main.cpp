 // program to print sum of prime numbers from 1 to 100 in C++
 // @auth = Yash Mittra (Written on Code::Blocks)
#include <iostream>
using namespace std;

int main()
{
int i, j, n = 100, sum = 0;

for(i = 2 ; i <= n ; i++){
    int prime = 1;

    for(j = 2; j <= i/2 ; j++){
        if (i%j == 0){
            prime = 0;
            break;
        }
    }

    (prime == 1) ? sum += i : 0 ;
}
cout << "Sum of prime numbers = " << sum << endl;

return 0;
}
