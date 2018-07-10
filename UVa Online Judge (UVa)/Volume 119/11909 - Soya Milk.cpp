#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>

#define Pi acos(-1)

using namespace std;

int main()
{
    double l, w, h, theta;

    while( cin >> l >> w >> h >> theta )
    {
        double d = l*tan((theta*Pi)/180.0);

        double volume;
        if( d>h ) volume = (0.5*h*h*l*w)/d;
        else volume = l*w*(h-(d*0.5));

        cout << fixed << setprecision(3) << volume << " mL" << endl;
    }
    return 0;
}
