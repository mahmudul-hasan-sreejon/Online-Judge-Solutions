#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    int N;
    scanf( "%d", &N );
    while( N-- ) {
        double K;
        scanf( "%lf", &K );

        if( K <= 2.0 ) putchar( '1' );
        else {
            double n = floor( sqrt( K * 2.0 ) );
            n = (((n + 1.0) * n) / 2.0) + 1.0;

            if( K == n ) putchar( '1' );
            else putchar( '0' );
        }
        if( N ) putchar( ' ' );
    }
    return 0;
}