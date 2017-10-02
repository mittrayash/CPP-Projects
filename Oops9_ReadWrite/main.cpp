#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char name[20], sex;
    int age, height, weight;
    ofstream fout;
    fout.open("Students");
    cout << "Enter Student Name: ";
    cin >> name;
    cout << endl << "Enter Student's sex (m/f): ";
    cin >> sex;
    cout << endl << "Enter Student's age: ";
    cin >> age;
    cout << endl << "Enter student's height (in cm): ";
    cin >> height;
    cout << endl << "Ener Student's weight: ";
    cin >> weight;
    cout << endl;
    fout << "Student Name: " << name << "\n";
    fout << "Student Sex: " << ((sex == 'm') ? "Male" : "Female") << "\n";
    fout << "Student Age: " << age << "\n";
    fout << "Student Height (in cm): " << height << "\n";
    fout << "Student Weight: " << weight << "\n";
    fout.close();

    ifstream fin;
    fin.open("Students");
    cout << "Data has been recorded successfully!" << endl;
    cout <<"\nContents of file are read as follows: " << endl;
    char line[100];
    while(fin){
        fin.getline(line, 100);
        cout << line << endl;
    }
    fin.close();
    return 0;
}
