#include <iostream>
#include <iomanip>
using namespace std;

class time
{
    int hr, mins ,sec;
public:
    time() // default constructor
    {
        hr = 0;
        mins = 0;
        sec = 0;
    }
    time(int a, int b ,int c)
    {
        hr = a;
        mins = b;
        sec = c;
    }
    void add(time x, time y)
    {
        hr = x.hr + y.hr;
        mins = x.mins + y.mins;
        sec = x.sec + y.sec;
    }
    void display()
    {
        cout<<std::setw(2)<<std::setfill('0')<<hr<<":"<<mins<<":"<<sec;
    }
};
 int main()
 {
     int h, m, s;
     cout<<"Enter time in HH/MM/SS format: ";
     cin>>h>>m>>s;
     time obj1(h,m,s);
     cout<<"Enter time in HH/MM/SS format: ";
     cin>>h>>m>>s;
     time obj2(h,m,s);
     time obj3;
     obj3.add(obj1, obj2);
     obj3.display();
     return 0;
 }
