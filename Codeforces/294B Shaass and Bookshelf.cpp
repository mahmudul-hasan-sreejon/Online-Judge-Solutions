#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200;
int n, t[MAXN+2], w[MAXN+2], total;
int dp[MAXN+2][MAXN+2][MAXN+2];

int rec( int i, int tt, int taken_w ) {
    if( i > (n - 1) ) return tt;

    int &ret = dp[i][tt][taken_w];
    if( ret != -1 ) return ret;
    ret = total;

    if( (tt - t[i]) >= (taken_w + w[i]) ) ret = rec( (i + 1), (tt - t[i]), (taken_w + w[i]) );
    return ret = min( ret, rec( (i + 1), tt, taken_w ) );
}

int main( int argc, char ** argv ) {
    cin >> n;
    for( int i = 0 ; i < n ; ++i ) cin >> t[i] >> w[i];

    total = accumulate( t, (t + n), 0 );
    memset( dp, -1, sizeof( dp ) );
    int ans = rec( 0, total, 0 );

    cout << ans << endl;

    return 0;
}