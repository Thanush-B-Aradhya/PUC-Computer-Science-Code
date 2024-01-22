// CODE TO INSERT AN ELEMENT IN ARRAY
#include <iostream>
using namespace std;
class insert
{
public:
  int arr[4], n, ele, pstn;
  void input();
  void cal();
  void output();
} obj;

void insert ::input()
{
  cout << "Enter the size of the array: " << endl;
  cin >> n;
  cout << "Enter your array: " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the position to be inserted: " << endl;
  cin >> pstn;
  cout << "Enter the element to be inserted: " << endl;
  cin >> ele;
}

void insert ::cal()
{
  if (pstn > n && pstn < 0)
  {
    cout << "\nPosition not found!!";
    exit(0);
  }
  else
  {
    for (int i = (n - 1); i >= pstn; i--)
      arr[i + 1] = arr[i];
  arr[pstn] = ele;
  }
  n = n + 1;
}

void insert::output()
{
  cout << "\nThe new Array is : ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << "  ";
}

int main()
{
  obj.input();
  obj.cal();
  obj.output();
  return 0;
}
