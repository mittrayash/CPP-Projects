#include <iostream>

using namespace std;

class Toll{
    int a = 0, b = 0, c = 0, d = 0, amount = 0, type;
    public:
        Toll(){
            cout << "Types of vehicles: " << endl;
            cout << "1. Two-Wheeler\n2. Cars\n3. Trucks\n4. VIP Vehicles\n5. Calculate Total\n\n";
        while (1){
            cout << "Enter the type of vehicle encountered: " << endl;
            cin >> type;
            switch(type){
                case 1:
                    a++;
                    break;
                case 2:
                    b++;
                    break;
                case 3:
                    c++;
                    break;
                case 4:
                    d++;
                    break;
                case 5:
                    cout << endl;
                    result(a, b, c, d);
                    break;
                default:
                    cout << "Invalid Input" << endl;

            }
            if (type == 5)
                break;
        }

        }

        void result(int a, int b, int c, int d){
            int ans = a*10 + b*50 + c*100 + d*0;
            cout << "Two Wheelers :" << a << endl;
            cout << "Cars :" << b << endl;
            cout << "Trucks :" << c << endl;
            cout << "VIPs :" << d << endl;
            cout << "Total Toll = " << ans << endl;
        }
};


int main()
{
    Toll obj;
    return 0;
}
