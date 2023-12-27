#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
    
    int a[10][10],b[10][10],s[10][10],i,j,m,n;

    cout<<"\nEnter the number of row and coloumn: ";
    cin >> m >> n ;
    cout << "\nEnter your " << m*n << " elements: ";

    for (i = 0; i<m; i++)
    {
        for(j=0;j<n;j++)
        cin >> a[i][j];
    }

    for (i = 0; i<m; i++)
    {
        for(j=0;j<n;j++)
         
        cin >> b[i][j];
    }
    
   

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)

    s[i][j] = a[i][j]+b[i][j];

    cout << "\n The matrix A: \n";
    for(i=0;i<m;i++)
    {   for (j=0;j<n;j++)
        cout << "\t" << a[i][j];
        cout << "\n";
    }

    cout << "\n The matrix B: \n";
    for(i=0;i<m;i++)
    {   for (j=0;j<n;j++)
        cout << "\t" << b[i][j];
        cout << "\n";
    }

    cout << "\n The matrix S: \n";
    for(i=0;i<m;i++)
    {   for (j=0;j<n;j++)
        cout << "\t" << s[i][j];
        cout << "\n";
    }

    return 0;

}