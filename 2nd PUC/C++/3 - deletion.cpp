// CODE TO DELETE AN ELEMENT IN AN ARRAY
#include <iostream>
using namespace std;
class del
{
public:
  int arr[10], n, ele, pstn;
  void input();
  void cal();
  void output();
} obj;

void del ::input()
{
  cout << "Enter the size of the array: " << endl;
  cin >> n;
  cout << "Enter your array: " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the position to be deleted: " << endl;
  cin >> pstn;
}

void del ::cal()
{
  if (pstn >= n)
  {
    cout << "Position not found!!" << endl;
    exit(0);
  }
  else
  {
    for (int i = pstn; i <= (n - 1); i++)
    {
      arr[i] = arr[i + 1];
    }
  }
  n = n - 1;
}

void del::output()
{
  cout << "The new Array is : ";
  for (int i = 0; i < n; ++i)
    cout << arr[i] << "  ";
}

int main()
{
  obj.input();
  obj.cal();
  obj.output();
}
