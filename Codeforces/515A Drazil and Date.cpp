#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    int a, b, s;
    scanf( "%d %d %d", &a, &b, &s );

    a = abs( a ), b = abs( b );

    int step = a + b;
    if( step <= s ) {
        if( ( !(step&1) && (s&1) ) || ( (step&1) && !(s&1) ) ) {
            puts( "No" );
        }
        else {
            puts( "Yes" );
        }
    }
    else {
        puts( "No" );
    }
    return 0;
}