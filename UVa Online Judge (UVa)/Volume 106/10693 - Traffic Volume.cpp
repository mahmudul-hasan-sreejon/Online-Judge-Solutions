#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double L, f;

    while( cin >> L >> f && L+f!=0.0 )
    {
        double v = sqrt( 2.0*L*f );
        double volume = (v*3600.0)/(2.0*L);

        cout << fixed << setprecision(8) << v << " " << volume << endl;
    }
    return 0;
}
