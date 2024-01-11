#include <iostream>
using namespace std;

class search
{
public:
  int arr[10], n, ele, loc;
  void input();
  void cal();
  void output();
};

void search ::input()
{
  cout << "\nEnter the size of the array : ";
  cin >> n;
  cout << "Enter the sorted elements for your array : " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the element to be searched : ";
  cin >> ele;
}

void search ::cal()
{
  int beg = 0, end = n - 1, mid;
  loc = -1;
  while (beg <= end)
  {
    mid = int((beg + end) / 2);
    if (arr[mid] == ele)
    {
      loc = mid;
      break;
    }
    else
    {
      if (ele < arr[mid])
        end = mid - 1;
      else
        beg = mid + 1;
    }
  }
}

void search ::output()
{
  if (loc >= 0)
    cout << "\n\tElement found at position "
         << loc << ". i.e, ARRAY[" << loc + 1 << "].";
  else
    cout << "\n\tNot Found";
  // cout << "\n\tThankYou for using Binary Search.";
}

main()
{
  search obj;
  obj.input();
  obj.cal();
  obj.output();
}
