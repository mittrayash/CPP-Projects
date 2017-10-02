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
    /*strng(const strng & s){
        len = s.len;
        p = new char[len+1];
        strcpy(p, s.p);
    }*/
    int operator <=(const strng & ss)
    {
        int m = strlen(p);
        int n = strlen(ss.p);
        if(m <= n)
            return 1;
        else return 0;
    }
    string show(){
        return p;
    }

 };


int main()
{
    strng s1 = "New";
    strng s2 = "York";
    strng s3 = strng("S3");
    strng s4 = strng(s2);
    if(s2 <= s1){
        cout << endl << s1.show();
        cout <<" is less than " << s2.show();
    }
    else{
        cout << endl << s1.show();
        cout <<" is NOT less than " << s2.show() << endl;
    }
    return 0;
}
