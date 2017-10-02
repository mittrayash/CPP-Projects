#include <iostream>

using namespace std;

class LIST{
public:
    virtual void store() = 0;
    virtual void retrieve() = 0;
    virtual void show() = 0;
    };
class Stack: public LIST{
    int arr[10], temp, tracker = 0, q = 0;
public:
    void store(){
        if(tracker <= 9){
            while(q == 0){
        cout << "Enter the number input: " << endl;
        cin >> temp;
        arr[tracker] = temp;
        tracker++;
        cout << "Input has been recorded!" << endl;
        cout << "To record another input, enter 0. Otherwise enter 1!" << endl;
        cin >> q;
        }}
        else cout << "Stack is full! OVERFLOW!" << endl;
    }
    void retrieve(){
       cout << endl << "This deletes a stack input!";
        if(tracker >= 0)
            tracker--;
        cout << " DELETED!" << endl;}
    void show(){
         temp = 0;
        cout << endl << "Stack View: " << endl;
        for(temp; temp < tracker; temp++){
            cout << arr[temp] << endl;
        }}};

class Queue: public LIST{
  int arr[10], temp, tracker = 0, q = 0, start = 0, inf = 0;
public:
    void store(){
        if(tracker <= 9){
            while(q == 0){
        cout << "Enter the number input: " << endl;
        cin >> temp;
        arr[tracker] = temp;
        tracker++;
        cout << "Input has been recorded!" << endl;
        cout << "To record another input, enter 0. Otherwise enter 1!" << endl;
        cin >> q;
        }}
        else cout << "Queue is full! OVERFLOW!" << endl;
    }
    void retrieve(){
       cout << endl << "This deletes a queue input!";
        if(start <= 9)
            inf++;
        cout << " DELETED!" << endl;
    }
    void show(){
        cout << endl << "Queue View: " << endl;
        start = inf;
        for(start; start < tracker; start++){
            cout << arr[start] << endl;
        }}};

int main()
{
    int i = 0, j = 0;
    LIST *ptr;
    cout << "1. Stack\n" << "2. Queue\n";
    cin >> i;
    if(i == 1){
        Stack obj;
        ptr = &obj;
        while(j != 4){
            cout << "----------------------------------" << endl;
            cout << "1. Store\n" << "2. Retrieve\n" << "3. Show Stack\n" << "4. Exit\n";
            cin >> j;
            if(j == 1){
                ptr->store();
                ptr->show();}
            if(j == 2){
                ptr->retrieve();
                ptr->show();}
            if (j == 3)
                ptr->show();
    }}
    else if(i == 2){
        Queue obj;
        ptr = &obj;
        while(j != 4){
            cout << "----------------------------------" << endl;
            cout << "1. Store\n" << "2. Retrieve\n" << "3. Show Queue\n" << "4. Exit\n";
            cin >> j;
            if(j == 1){
                ptr->store();
                ptr->show();}
            if(j == 2){
                ptr->retrieve();
                ptr->show();}
            if (j == 3)
                ptr->show();
    }}
    return 0;
}
