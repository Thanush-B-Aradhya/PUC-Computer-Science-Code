#include <iostream>
using namespace std;

inline float cube(float a)
{
  return (a * a * a);
}

int main()
{
  float s, vol;
  cout << "\nEnter the side of the cube: "<<endl;
  cin >> s;
  vol = cube(s);
  cout << "Volume of the cube: " << vol << endl;

  return 0;
}
