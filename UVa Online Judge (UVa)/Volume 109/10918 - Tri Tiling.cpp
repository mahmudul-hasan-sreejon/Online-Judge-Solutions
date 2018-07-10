#include <bits/stdc++.h>

const int MAXN = 30;
int dp[MAXN+2];

int f( int n );

int g( int n ) {
    if( n == 0 ) return 0;
    if( n == 1 ) return 1;
    return f( n - 1 ) + g( n - 2 );
}

int f( int n ) {
    if( n == 0 ) return 1;
    if( n == 1 ) return 0;
    if( dp[n] != -1 ) return dp[n];
    return dp[n] = f( n - 2 ) + (2 * g( n - 1 ));
}

int main( int argc, char ** argv ) {
    memset( dp, -1, sizeof( dp ) );

    int n;
    while( scanf( "%d", &n ) && n != -1 ) printf( "%d\n", f( n ) );

    return 0;
}
