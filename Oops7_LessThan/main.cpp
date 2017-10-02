#include <iostream>
using namespace std;
class Overload{
    int x;
public:
    Overload(){
        x = 0;
    }
    Overload(int p){
        x = p;
    }
    bool operator <(Overload ss){
        Overload temp;
        temp.x = ss.x;
        if(x < temp.x){
            cout << "true" << endl;
            return true;
        }
        else{
            cout << "false" << endl;
            return false;
        }}
};
int main(){
    Overload a, b, c;
    a = Overload(4);
    b = Overload(7);
    c = a < b;
    return 0;
}
