#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    string name, roll_no;

public:
    void read()
    {
        cout << "\nEnter your Name: ";
        getline(cin, name);
        cout << "Enter your Roll Number: ";
        getline(cin, roll_no);
    };
    void display()
    {
        cout << "\n\nName: " << name << endl;
        cout << "Roll no: " << roll_no;
    };
};

class marks : public student
{
private:
    int m1, m2, total = 0;

public:
    void read1()
    {
        cout << "\nEnter two subject marks: ";
        cin >> m1 >> m2;
        total = m1 + m2;
    }
    void display1()
    {
        cout << "\nSubject1 = " << m1;
        cout << "\nSubject2 = " << m2;
        cout << "\nTotal marks = " << total;
    }
};

main()
{
    marks obj;
    obj.read();
    obj.read1();
    obj.display();
    obj.display1();
}