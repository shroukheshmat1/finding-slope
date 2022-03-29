#include <iostream>
using namespace std;
int main()
{
    double x1,x2,y1,y2,c;
    cout<<"please enter the coordinates of the first point x,y respectively"<<"\n";
    cin>>x1>>y1;
    cout<<"please enter the coordinates of the second point x,y respectively"<<"\n";
    cin>>x2>>y2;
    double slope;
    slope=(y2-y1)/(x2-x1);                      //calc slope
    c=y1-(slope*x1);                            //calc constant
    cout<<"the slope is: "<<slope <<"\n";
    if (c<0)
        cout<<"equation of straight line is: y="<<slope<<"x"<<c<<"\n";
    else
        cout<<"equation of straight line is: y="<<slope<<"x+"<<c<<"\n";
    return 0;
}