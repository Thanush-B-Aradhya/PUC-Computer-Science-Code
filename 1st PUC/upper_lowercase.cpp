#include <conio.h>
#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "\nEnter an alphabet to check it's case : ";
    cin >> ch;

    if (ch >= 'A' and ch <= 'Z')

    {
        cout << "\nThe given alphabet is UpperCase.";
    }
    else
    {
        cout << "\nThe given alphabet is LowerCase.";
    }
    getch();

    return 0;
}