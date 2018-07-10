#include <bits/stdc++.h>

using namespace std;

int a[52];

int main( int argc, char ** argv ) {
    int n, k;
    scanf( "%d %d", &n, &k );
    for( int i = 0 ; i < n ; i++ ) {
        scanf( "%d", &a[i] );
    }

    int counter = 0;
    for( int i = 0 ; i < n ; i++ ) {
        if( a[i] >= a[k-1] && a[i] ) {
            counter++;
        }
    }

    printf( "%d\n", counter );

    return 0;
}