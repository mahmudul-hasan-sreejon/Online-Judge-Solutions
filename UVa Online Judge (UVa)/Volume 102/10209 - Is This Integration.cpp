#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>

#define Pi acos(-1)

using namespace std;

int main()
{
    double a;

    while( cin >> a )
    {
        double area = a*a;
        double b = area * (1 - sqrt(3) + Pi / 3);
        double c = area * (2 * sqrt(3) - 4 + Pi / 3);
        double d = area * (4 - sqrt(3) - 2 * Pi / 3);

        cout << fixed << setprecision(3) << b << " " << fixed << setprecision(3) << c << " " << fixed << setprecision(3) << d << endl;
    }
    return 0;
}
