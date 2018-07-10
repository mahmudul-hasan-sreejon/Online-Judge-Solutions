#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main( int argc, char ** argv ) {
    int T, nCase = 1;
    scanf( "%d", &T );
    while( T-- ) {
        ll S;
        scanf( "%lld", &S );
 
        ll sqrtS = sqrt( S );
        if( (double) sqrt( S ) > sqrtS ) ++sqrtS;
 
        ll x, y;
        if( sqrtS <= ( sqrtS * sqrtS ) - S ) {
            x = S - ( ( sqrtS - 1 ) * ( sqrtS - 1 ) );
            y = sqrtS;
        }
        else {
            x = sqrtS;
            y = ( sqrtS * sqrtS ) - S + 1;
        }
        if( sqrtS & 1 ) swap( x, y );
 
        printf( "Case %d: %lld %lld\n", nCase, x, y );
        ++nCase;
    }
    return 0;
}