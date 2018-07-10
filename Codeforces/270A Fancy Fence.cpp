#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    int tc;
    scanf( "%d", &tc );
    while( tc-- ) {
        int a;
        scanf( "%d", &a );

        printf( "%s\n", ( 360 % (180-a) ) ? "NO" : "YES" );
    }
    return 0;
}