#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 5e5;
ll a[MAXN + 5], s[MAXN + 5], part[5], dp[MAXN + 5][5];
int n;

ll rec( int i, int j ) {
    if( j >= 3 ) return 1;
    if( i >= n ) return 0;

    ll &ret = dp[i][j];
    if( ret != -1 ) return ret;

    ret = 0;
    if( s[i] == part[j] ) ret += rec( (i + 1), (j + 1) );
    ret += rec( (i + 1), j );

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

    while( cin >> n ) {
        memset( s, 0, sizeof( s ) );
        for( int i = 1 ; i <= n ; ++i ) {
            cin >> a[i];
            s[i] = s[i - 1] + a[i];
        }

        if( (n <= 2) || (s[n] % 3) ) cout << "0\n";
        else {
            part[1] = s[n] / 3;
            part[2] = (s[n] / 3) * 2;
            part[3] = (s[n] / 3) * 3;

            memset( dp, -1, sizeof( dp ) );
            cout << rec( 1, 1 ) << "\n";
        }
    }
    return 0;
}
