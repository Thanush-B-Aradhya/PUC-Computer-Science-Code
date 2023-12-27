#include <iostream>
using namespace std;

int main()
{

    int num, temp, rem, sum = 0;

    cout << "\nEnter the number: ";
    cin >> num;

    temp = num;

    do
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;

    } while (temp != 0);

    if (sum == num)

        cout << num << " is an Armstrong number.";

    else

        cout << num << " is not an Armstrong number.";

    return 0;
}