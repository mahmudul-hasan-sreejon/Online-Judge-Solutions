#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50;

int l, n, c[MAXN+2];
int dp[MAXN+2][MAXN+2];

int mcm( int x, int y ) {
    if( x == (y - 1) ) return 0;
    int &ret = dp[x][y];
    if( ret != -1 ) return ret;
    ret = INT_MAX;
    for( int i = x + 1 ; i <= (y - 1) ; ++i ) {
        int temp = mcm( x, i ) + mcm( i, y ) + (c[y] - c[x]);
        if( temp < ret ) ret = temp;
    }
    return ret;
}

int main( int argc, char ** argv ) {
	while( scanf( "%d", &l ) == 1 && l ) {
        scanf( "%d", &n );
        c[0] = 0;
        for( int i = 1 ; i <= n ; ++i ) scanf( "%d", &c[i] );
        c[n+1] = l;

        memset( dp, -1, sizeof( dp ) );
        int cost = mcm( 0, (n + 1) );

        printf( "The minimum cutting is %d.\n", cost );
    }
	return 0;
}