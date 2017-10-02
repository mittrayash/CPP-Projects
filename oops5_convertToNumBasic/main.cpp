#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char val[50];
    cout << "Enter amount in rupees with commas: ";
    cin >> (val);
    int len = strlen(val);
    int i = 0;
    cout << "Amount = ";
    while(i < len){
        if(val[i] != ','){
            cout << val[i];
        }
        i++;
    }
    cout << endl;
    return 0;
}
