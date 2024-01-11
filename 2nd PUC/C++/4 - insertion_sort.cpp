#include <iostream>
using namespace std;

class sort
{
public:
  int arr[10], n;
  void input();
  void cal();
  void output();
};

void sort ::input()
{
  cout << "\nEnter the size of your array : ";
  cin >> n;
  cout << "\nEnter the elements of your array : " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
}

void sort ::cal()
{
  int j, t;
  for (int i = 1; i < n; i++)
  {
    j = i;
    while (j >= 1)
    {
      if (arr[j] < arr[j - 1])
      {
        t = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = t;
      }
      j = j - 1;
    }
  }
}

void sort ::output()
{
  cout << "\nNew array is : ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

main()
{
  sort obj;
  obj.input();
  obj.cal();
  obj.output();

}
