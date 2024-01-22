#include <iostream>
using namespace std;

class student
{
private:
    int regno;
    char name[20];
    float fees;

public:
    void get();
    void display();
};

void student::get()
{
    cout << "\nEnter student register number: ";
    cin >> regno;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student fees: ";
    cin >> fees;
}

void student::display()
{
    cout << "\nStudent register number is " << regno;
    cout << ".\nStudent name is " << name;
    cout << ".\nStudent fees is " << fees << ".";
}

main()
{
    student s, *sp;
    sp = &s;
    sp->get();
    sp->display();
}