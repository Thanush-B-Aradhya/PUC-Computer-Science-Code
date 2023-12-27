#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int n, f = 0, s = 1, t, count;

   cout << "Enter the limit : ";
   cin >> n;
   cout << f << setw(4);
   t = f + s;

   for (count = 2; t <= n; count++)
   {
      cout << s << setw(4);
      f = f + s;
      s = t;
      t = f + s;
   }
   cout << "\nTotal terms = " << count;
   return 0;
}