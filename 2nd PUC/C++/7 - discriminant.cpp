#include <iostream>
#include <math.h>
using namespace std;

class disc
{
public:
  float a, b, c, R1, R2, d;
  void getdata();
  void cal();
  void display();
} s; // We can create oblect(s) like this

void disc ::getdata()
{
  cout << "\nEnter the co-efficients (a, b, c) : ";
  cin >> a >> b >> c;
}

void disc ::cal()
{
  d = b * b - (4 * a * c);
  if (d == 0)
  {
    cout << "\nRoot are equal.";
    R1 = (-b / (2 * a));
    R2 = R1;
  }
  else if (d > 0)
  {
    cout << "\nThe roots are positive.";
    R1 = ((-b + sqrt(d)) / (2 * a));
    R2 = ((-b - sqrt(d)) / (2 * a));
  }
  else
  {
    cout << "\nRoots are imaginary.";
    exit(0);
  }
}

void disc ::display()
{
  cout << "\nFirst root is " << R1 << " and the second root is " << R2 << ".";
}

main()
{
  s.getdata();
  s.cal();
  s.display();
}
