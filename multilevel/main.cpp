#include <iostream>
#include <fstream>
using namespace std;

class Complexx{
    int real, img;
public:
    Complexx(){real = img = 0;}
    Complexx(int x){real = img = x;}
    Complexx(int x, int y): real(x), img(y){}

    Complexx operator *(Complexx c){
        Complexx temp;
        temp.real = (c.real * real) - (c.img * img);

        temp.img = (c.real * img) + (c.img * real);
        return temp;
    }
    void show(){
        cout << "Real = " << real << endl;
        cout << "Img = " << img << endl;
        cout << "=========================" << endl;
    }
};


int main()
{
    Complexx c1(2, 3);
    Complexx c2(3, 2);
    Complexx c3 = c1*c2;
    c3.show();
    return 0;
}
