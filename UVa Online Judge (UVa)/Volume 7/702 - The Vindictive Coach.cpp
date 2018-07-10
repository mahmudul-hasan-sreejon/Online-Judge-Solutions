#include <bits/stdc++.h>

using namespace std;

long long dp[40][40][2];

long long rec( int l, int r, int f ) {
    if( (l + r) == 0 ) return 1;
    long long &ret = dp[l][r][f];
    if( ret != -1 ) return ret;
    ret = 0;
    if( !f )
        for( int i = 1 ; i <= l ; ++i ) ret += rec( (i - 1), (l + r - i), 1 );
    else
        for( int i = 1 ; i <= r ; ++i ) ret += rec( (i + l - 1), (r - i), 0 );
    return ret;
}

int main( int argc, char ** argv ) {
    int N, m;
    while( cin >> N >> m ) {
        memset( dp, -1, sizeof( dp ) );

        if( m == 1 ) cout << ( (N >= 4) ? rec( 0, (N - 3), 1 ) : 1 ) << endl;
        else cout << rec( (m - 1), (N - m), 0 ) << endl;
    }
    return 0;
}
