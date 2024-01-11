#include <iostream>
#include <math.h>
using namespace std;

class AREA
{
public:
  float area(float a)
  {
    return (a * a);
  }
  float area(float a, float b)
  {
    return (a * b);
  }
  float area(float s1, float s2, float s3)
  {
    float s = (s1 + s2 + s3) / 2;                    // Calculate semi-perimeter
    return sqrt(s * (s - s1) * (s - s2) * (s - s3)); // Corrected Heron's formula
  }
} obj;

int main()
{
  float x, y, z;
  int choice;

  cout << "\nEnter the choice of shape to find the area:\n1 Square.\n2 Rectangle.\n3 Triangle.\n\nYour choice is ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "\nEnter the side of the square: ";
    cin >> x;
    cout << "\nThe area of the square is " << obj.area(x);
    break;

  case 2:
    cout << "\nEnter the length and breadth of the rectangle: ";
    cin >> x >> y;
    cout << "\nThe area of the Rectangle is " << obj.area(x, y);
    break;

  case 3:
    cout << "\nEnter the 3 sides of the Triangle: ";
    cin >> x >> y >> z;
    cout << "\nThe area of the Triangle is " << obj.area(x, y, z);
    break;

  default:
    cout << "\nInvalid choice of shape.";
  }

  return 0; // Return 0 to indicate successful program execution.
}
