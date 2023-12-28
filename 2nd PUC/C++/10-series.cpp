/*
    1 + x^1 + x^2 + x^3 + .... + x^n.
*/
#include <iostream>
#include <math.h>
using namespace std;

class copy
{
    int x, n;

public:
    int calculate();
    copy(int xx, int nn)
    {
        x = xx;
        n = nn;
    }
};

int copy ::calculate()
{
    int i, sum = 1;
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i);
    }
    return sum;
}

int main()
{
    int x, n;
    cout << "\nEnter the base and the power (x & n): ";
    cin >> x >> n;

    copy obj(x, n);
    copy cpy = obj;

    cout << "\nObject 1:Sum of the series: " << obj.calculate();
    cout << "\nObject 2:Sum of the series: " << cpy.calculate();

    return 0;
}