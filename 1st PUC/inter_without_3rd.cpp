#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    int a,b;
    cout << "\nEnter two numbers: " ;
    cin  >> a >> b;
    
    cout << "\nBefore swapping NUMNER 1 = " << a << " and NUMBER 2 = " << b;

    a = a+b;
    b = a-b;
    a = a-b;
/* Other methods 
   a = a*b;   
   b = a/b;
   a = a/b;  
*/
    cout << "\nAfter swapping NUMBER 1 = " << a << " and NUMBER 2 = " << b; 

    return 0;

}