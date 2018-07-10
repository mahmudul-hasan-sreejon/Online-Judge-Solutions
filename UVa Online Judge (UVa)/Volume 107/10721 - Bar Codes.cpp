#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50;
long long dp[MAXN+2][MAXN+2][MAXN+2];

long long BC( int n, int k, int m ) {
    if( !n && !k ) return 1;
    if( n <= 0 || k <= 0 ) return 0;
    long long &ret = dp[n][k][m];
    if( ret != -1 ) return ret;
    ret = 0;
    for( int i = 1 ; i <= m ; ++i ) ret += BC( (n - i), (k - 1), m );
    return ret;
}

int main( int argc, char ** argv ) {
    int n, k, m;
    while( cin >> n >> k >> m ) {
        memset( dp, -1, sizeof( dp ) );
        cout << BC( n, k, m ) << endl;
    }
    return 0;
}
