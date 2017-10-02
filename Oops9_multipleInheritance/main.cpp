#include <iostream>
using namespace std;
class Person{
protected:
    int age;
    string name = "";
public:
    Person(string a, int y){
        name = a;
        age = y;
}};
class Employee: public Person{
protected:
    int id = 0;
public:
    Employee(string a, int ag, int id1):
        Person(a, ag)
        {
            id = id1;
        }};
class Project: public Employee{
    int proj_id = 0;
public:
    Project(string a, int ag, int id1, int proj):
         Employee(a, ag, id1)
        {
            proj_id = proj;
        }
    void show(){
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Employee ID = " << id << endl;
        cout << "Project ID = " << proj_id << endl;
}};
int main(){
    Project p1("Yash Mittra", 21, 123, 999);
    p1.show();
    return 0;
}
