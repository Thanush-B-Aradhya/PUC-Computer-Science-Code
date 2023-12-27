#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float S1,S2,S3,area,X;
    
    cout << "\nEnter 3 sides: ";
    cin >> S1,S2,S3;

    X = (S1+S2+S3)/2;
    area = sqrt(X*(S1-X)*(S2-X)*(S3-X));
    cout << "\nArea is " << area ;
    return 0;
}