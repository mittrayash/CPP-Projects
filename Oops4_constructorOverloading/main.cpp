#include <iostream>

using namespace std;

class Overloading{
    public :
    int real, img;
    Overloading(){
        real = img = 0;
        cout << "Function with no parameters" <<endl;
        cout << "Real : " << real << endl
        << "Imaginary : " << img << endl << endl;
    }
    Overloading(int x){
        real = img = x;
        cout << "Function with one parameters" <<endl;
        cout << "Real : " << real << endl
        << "Imaginary : " << img << endl << endl;
    }
    Overloading(int x, int y){
        real = x;
        img = y;
        cout << "Function with no parameters" <<endl;
        cout << "Real : " << real << endl
        << "Imaginary : " << img << endl << endl;
    }
};

int main(){
    Overloading();
    Overloading(2);
    Overloading(2, 3);
    return 0;
}
