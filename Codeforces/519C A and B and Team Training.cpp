#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    #ifndef ONLINE_JUDGE
        freopen( "in.txt", "r", stdin );
        freopen( "out.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cout.tie( NULL );
    cin.tie( NULL );

    int n, m;
    while( cin >> n >> m ) {
        int ans = INT_MIN;
        for( int i = 0 ; i <= n ; ++i ) {
            int N = n - i;
            int M = m - (2 * i);

            int temp = i;
            if( M >= 0 ) {
                temp += min( M, (N / 2) );
                ans = max( ans, temp );
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
