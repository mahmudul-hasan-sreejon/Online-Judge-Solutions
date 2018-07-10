#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        double Ax, Ay, Bx, By, Cx, Cy;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

        double area = (Ax*By+Bx*Cy+Cx*Ay-Ay*Bx-By*Cx-Cy*Ax)/(2*7);

        if( area<0)
            area *= -1;

        cout << fixed << setprecision(0) << area << endl;
    }
    return 0;
}
