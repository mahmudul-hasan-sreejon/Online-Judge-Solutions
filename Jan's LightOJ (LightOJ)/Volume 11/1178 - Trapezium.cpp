#include <bits/stdc++.h>
 
using namespace std;
 
int main( int argc, char ** argv ) {
    int T;
    scanf( "%d", &T );
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        double a, b, c, d;
        scanf( "%lf %lf %lf %lf", &a, &b, &c, &d );
 
        double f = abs( a - c );
        double s = (b + d + f) / 2.0;
        double triangleArea = sqrt( s * (s - b) * (s - d) * (s - f) );
        double h = (triangleArea * 2.0) / f;
        double area = ((a + c) * h) / 2.0;
 
        printf( "Case %d: %lf\n", nCase, area );
    }
    return 0;
}