#include <iostream>
using namespace std;

int main()
{
   int n, temp, digit, rem = 0;

   cout << "Enter a positive tempber: ";
   cin >> temp;

   n = temp;

   do
   {
      digit = temp % 10;
      rem = (rem * 10) + digit;
      temp = temp / 10;
   } while (temp != 0);

   cout << " The reverse of the tempber is: " << rem << endl;

   if (n == rem)
      cout << " The tempber is a palindrome.";
   else
      cout << " The tempber is not a palindrome.";

   return 0;
}