// Code to check the frequency of an element in array.
#include <iostream>
using namespace std;

class frequency
{
public:
  int arr[10], n, ele, counter = 0;
  void input();
  void cal();
  void output();
} obj;

void frequency ::input()
{
  cout << "\nEnter the size of the array: ";
  cin >> n;
  cout << "\nEnter your array: " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "\nEnter the element to be searched: ";
  cin >> ele;
}

void frequency ::cal()
{
  for (int i = 0; i < n; i++)
  {
    if (ele == arr[i])
    {
      counter++;
    }
  }
}

void frequency::output()
{
  if (counter == 0)
    cout << "\nElement not found";
  else
    cout << "\nElement repeated for " << counter << " time(s).";
}

int main()
{
  obj.input();
  obj.cal();
  obj.output();

  return 0;
}
