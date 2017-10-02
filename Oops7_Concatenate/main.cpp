#include <iostream>
#include <string.h>
using namespace std;
class Overload{
    char str[100];
// Use constructors whenever overloading binary operators
// so as to give the operand before '+' operator a value.
public:
    Overload(){
        strcpy(str, " ");
    }
     Overload(char s[]){
        strcpy(str, s);
    }
    Overload operator +(Overload ss){
//The ss in parenthesis represents the operand after '+' operator
        Overload temp;
        strcpy(temp.str, str);
        strcat(temp.str, ss.str);
        cout << temp.str;
        return temp;
    }
};
int main()
{
    Overload obj1, obj2, obj3;
    obj1 = Overload("Hey! ");
    obj2 = Overload("Do you have the time?");
    obj3 = obj1+obj2;
    return 0;
}
