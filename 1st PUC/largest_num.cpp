#include <iostream>
using namespace std;

int main()

{

   int a, b, c, largest, smallest, seclargest;
   cout << "\nEnter the three numbers: ";
   cin >> a >> b >> c;

   largest = a; // Assume first number as largest
   if (b > largest)
      largest = b;
   if (c > largest)
      largest = c;

   smallest = a; // Assume first number as smallest
   if (b < smallest)
      smallest = b;
   if (c < smallest)
      smallest = c;

   seclargest = (a + b + c) - (largest + smallest);
   cout << "\nSmallest Number is = " << smallest;
   cout << "\nSecond Largest Number is = " << seclargest;
   cout << "\nLargest Number is = " << largest;

   return 0;
}