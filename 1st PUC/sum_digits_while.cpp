#include<iostream>
using namespace std;

int main(){

    int digit,rem,sum = 0;
    cout << "\nEnter number: ";
    cin  >> digit;

    while (digit>0)
    {
        rem = digit%10;
        sum = sum + rem;
        digit = digit/10;
    }
    cout << "\nSum of digits = " << sum;
    cout << endl;

    return 0;
}