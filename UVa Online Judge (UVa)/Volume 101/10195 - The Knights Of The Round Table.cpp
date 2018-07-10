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
        if( a==0.0 || b==0.0 || c==0.0 )
            cout << "The radius of the round table is: 0.000" << endl;
        else
        {
            double s = (a+b+c)/2;
            double r = (sqrt(s*(s-a)*(s-b)*(s-c)))/s;

            cout << "The radius of the round table is: " << fixed << setprecision(3) << r << endl;
        }
    }
    return 0;
}
