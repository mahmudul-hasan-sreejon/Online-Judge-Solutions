#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    while( cin >> a >> b >> c )
    {
        double s = (a+b+c)/2.0;
        double area = (4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c)));

        if( area>0.0 ) cout << fixed << setprecision(3) << area << endl;
        else cout << "-1.000" << endl;
    }
    return 0;
}
