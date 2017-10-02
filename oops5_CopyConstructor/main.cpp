#include <iostream>
using namespace std;
class CopyFact{
    int num, i, fact = 1;
public:
    CopyFact(){
        cout << "Enter the number: ";
        cin >> num;
        for(i = 1; i <= num; i++){
            fact *= i;
        }
    }
    void display(){
    cout << "Factorial = " << fact << endl << endl;
    }
};
int main()
{
    CopyFact obj;
    cout << "Main constructor: " << endl;
    obj.display();
    CopyFact obj2(obj);
    cout << "Copy result: " << endl;
    obj2.display();
    return 0;
}
