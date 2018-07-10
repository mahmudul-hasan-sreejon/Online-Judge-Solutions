#include <bits/stdc++.h>

using namespace std;

const int MOD = 100000007;
const int MAXN = 50;
int n, K, A[MAXN + 5], C[MAXN + 5], dp[MAXN + 5][(MAXN*20) + 5];

int rec( int idx, int rem ) {
    if( idx == n && rem == 0 ) return 1;
    if( idx == n && rem != 0 ) return 0;
    if( rem == 0 ) return 1;
    if( rem < 0 ) return 0;

    int &ret = dp[idx][rem];
    if( ret != -1 ) return ret;

    ret = 0;
    for( int i = 0 ; i <= C[idx] ; ++i ) {
        ret = ( ret + rec( ( idx + 1 ), ( rem - A[idx] * i ) ) ) % MOD;
    }
    return ret;
}

int main( int argc, char ** argv ) {
    #ifndef ONLINE_JUDGE
        freopen( "in.txt", "r", stdin );
        freopen( "out.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    int T;
    scanf( "%d", &T );
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        scanf( "%d %d", &n, &K );
        for( int i = 0 ; i < n  ; ++i ) scanf( "%d", &A[i] );
        for( int i = 0 ; i < n  ; ++i ) scanf( "%d", &C[i] );

        memset( dp, -1, sizeof( dp ) );

        printf( "Case %d: %d\n", nCase, rec( 0, K ) );
    }
    return 0;
}
