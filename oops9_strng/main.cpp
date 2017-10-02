#include <iostream>
#include <string.h>

using namespace std;

class strng{
    char *p;
    int len;
public:
    strng(){
         p =0;
         len = 0;
    }
    strng(const char *s){
        len = strlen(s);
        p = new char[len+1];
        strcpy(p, s);
    }
    void length(){
        cout << len << endl;}
    void toUpp(){
        for(int i=0; i < len; i++){
        cout << char(toupper(p[i]));
    }
    cout << endl;
    }
    void toLow(){
        for(int i=0; i < len; i++){
        cout << char(tolower(p[i]));
    }}
};
int main(){
    strng a = strng("Hello World!");
    a.length();
    a.toUpp();
    a.toLow();
    return 0;
}
