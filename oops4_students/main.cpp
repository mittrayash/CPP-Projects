#include <iostream>

using namespace std;

class student{
        public:
            char name[50];
            int id;
            int age;
        void enterData(){
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter student ID: ";
            cin >> id;
            cout << "Enter student age: ";
            cin >> age;
            cout << endl;
        }
        void display();
};
    void student::display(){
            cout << endl << "Name: " << name <<
            endl << "ID: " << id << endl<< "Age: " << age << endl;
        }

int main(){
    student s1, s2, s3;

    s1.enterData();
    s2.enterData();
    s3.enterData();
    cout << "----------------------OUTPUT----------------------" << endl;
    s1.display();
    s2.display();
    s3.display();


    return 0;
}
