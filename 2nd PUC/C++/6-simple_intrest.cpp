#include <iostream>
using namespace std;

class simple_interest
{
public:
  float time;
  double principle, rate;
  void getdata()
  {
    cout << "Enter the amount of money you want to invest : ";
    cin >> principle;
    cout << "\nEnter your interest Rate (in %) : ";
    cin >> rate;
    cout << "\nEnter number of years for which you have invested : ";
    cin >> time;
  }
  void showdata()
  {
    cout << "\n  The Amount Invested is:" << principle << endl;
    cout << "  Interest earned on this investment is:" << (principle * rate * time) << endl;
    // cout<<"\tTotal Interest Earned after "<<time<<" Years are:"<<((principle*(((1+rate),time)))-principle)<<endl;
  }
};

int main()
{
  simple_interest obj;
  obj.getdata();
  obj.showdata();
  return 0;
}