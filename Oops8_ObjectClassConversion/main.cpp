#include <iostream>

using namespace std;

class twelveHour{ //Source Class
    int hours, minutes, seconds;
    bool am;

public:
    twelveHour(){
        hours = minutes = seconds = 0;
        am = true;
    }
    twelveHour(int x, int y, int z, bool k){
        hours = x;
        minutes = y;
        seconds = z;
        am = k;
    }
    int getHours(){
        return hours;
    }
    int getMinutes(){
        return minutes;
    }
    int getSeconds(){
        return seconds;
    }
    bool getAM(){
    return am;
    }
    friend void showTime(twelveHour time);
};

class military{//Destination class
    int hours, minutes, seconds;

public:
    military(){
        hours = minutes = seconds = 0;
    }
    military(int x, int y, int z){
        hours = x;
        minutes = y;
        seconds = z;
    }//Using CONSTRUCTOR:-
    military(twelveHour time){
        seconds = time.getSeconds();
        minutes = time.getMinutes();
        hours = ((time.getAM())? time.getHours() : time.getHours() + 12 );
    }
    friend void showTime(military time);

};

void showTime(twelveHour time){
    cout << "TWELVE HOUR FORMAT" << endl;
    cout << time.hours << ":" << time.minutes << ":" << time.seconds;
    if(time.am == true)
        cout << " AM" << endl;
    else
        cout << " PM" << endl;
}
void showTime(military time){
    cout << endl << "MILITARY FORMAT" << endl;
    cout << time.hours << ":" << time.minutes << ":" << time.seconds << endl;
}

int main()
{
    twelveHour time1(12, 12, 12, true);
    twelveHour time2(9, 4, 30, false);

    military t1, t2;
    t1 = time1;
    t2 = time2;
    showTime(time1);
    showTime(t1);
    cout << endl << "--------------------------------------" << endl;
    showTime(time2);
    showTime(t2);

    return 0;
}
