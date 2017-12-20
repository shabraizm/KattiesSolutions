#include <iostream>
#include <math.h>
using namespace std;

double degrees_to_radian(double deg)
{
    return deg * 3.1415 / 180.0;
}

int main() {

    int numtest;
    double v0, angle, x1, h1 ,h2, g = 9.81;

    cin>>numtest;

    for(int i = 0; i < numtest; i++)
    {
        cin>> v0>>angle>>x1>>h1>>h2;
        angle = degrees_to_radian(angle);
        double time = (x1/(v0*cos(angle)));
        double hight = (v0*time*sin(angle)-0.5*g*time*time);
        cout<<(( hight>h1+1 && hight<h2-1)? "Safe" : "Not Safe")<<endl;
    }
    return 0;
}
