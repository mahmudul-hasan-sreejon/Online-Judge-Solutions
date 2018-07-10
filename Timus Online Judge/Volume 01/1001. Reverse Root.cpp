#include <bits/stdc++.h>

using namespace std;

double a[1000002];

int main( int argc, char ** argv ) {
    int SZ = 0;
    while( scanf( "%lf", &a[SZ] ) != EOF ) {
        ++SZ;
    }

    for( int i = SZ - 1 ; i >= 0 ; --i ) {
        printf( "%.4lf\n", sqrt( a[i] ) );
    }

    return 0;
}
