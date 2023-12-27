#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    int a,b,c;
    cout << "\nEnter two number: " ;
    cin  >> a >> b;

    cout << "\nBefore swapping NUMNER 1 = " << a << " and NUMBER 2 = " << b;

    c = a;
    a = b;
    b = c;

    cout << "\nAfter swapping NUMBER 1 = " << a << " and NUMBER 2 = " << b; 
    
    return 0;
}
