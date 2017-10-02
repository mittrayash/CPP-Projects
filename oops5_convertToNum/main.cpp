#include <iostream>
#include <sstream>
using namespace std;
int main(){
string input = "12,34,123";
istringstream ss(input);
string token = "";

while(getline(ss, token, ',')) {
    cout << token;
}
return 0;
}
