#include<iostream>
using namespace std;

int main(){
    
float rad,circum,area;cout << "\nEnter Radius: ";
    cin  >> rad;
    
    circum = 2*3.14*rad; area = 3.14*rad*rad;

    cout << "\nCircumfurence is " << int(circum) << " and Area is " << int(area);
    
    return 0;
}
