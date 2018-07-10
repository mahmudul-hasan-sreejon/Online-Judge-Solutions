#include <bits/stdc++.h>

using namespace std;

const int MAXN = 4e3;
int n, a, b, c;
int dp[MAXN+5];

int rec( int rem ) {
    if( rem == 0 ) return 0;
    if( rem < 0 ) return INT_MIN;

    int &ret = dp[rem];
    if( ret != -1 ) return ret;

    ret = max( 1 + rec( rem - a ), max( 1 + rec( rem - b ), 1 + rec( rem - c ) ) );
    return ret;
}

int main( int argc, char ** argv ) {
    #ifndef ONLINE_JUDGE
        freopen( "in.txt", "r", stdin );
        freopen( "out.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cout.tie( NULL );
    cin.tie( NULL );

    while( cin >> n >> a >> b >> c ) {
        memset( dp, -1 , sizeof dp );
        dp[0] = 0;

        cout << rec( n ) << "\n";
    }
    return 0;
}
