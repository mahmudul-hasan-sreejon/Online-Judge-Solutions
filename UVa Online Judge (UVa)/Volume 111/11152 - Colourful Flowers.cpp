#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>

#define Pi 2*acos(0.0)

using namespace std;

int main()
{
    double a, b, c;

    while( cin >> a >> b >> c )
    {
        double s = (a+b+c)/2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        double circumscribed_radius = (a*b*c)/(4.0*area);
        double inscribed_radius = area/s;

        double sunflower = Pi*circumscribed_radius*circumscribed_radius - area;
        double violet = area - Pi*inscribed_radius*inscribed_radius;
        double rose = Pi*inscribed_radius*inscribed_radius;

        cout << fixed << setprecision(4) << sunflower << " " << violet << " " << rose << endl;
    }
    return 0;
}
