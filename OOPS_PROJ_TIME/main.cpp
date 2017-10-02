#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t  timev;
    time(&timev);
    cout << timev << endl;
    return 0;
}
