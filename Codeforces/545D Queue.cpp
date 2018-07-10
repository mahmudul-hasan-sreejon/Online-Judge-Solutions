#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;
int t[MAXN + 5];

int main( int argc, char ** argv ) {
    #ifndef ONLINE_JUDGE
        freopen( "in.txt", "r", stdin );
        freopen( "out.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cout.tie( NULL );
    cin.tie( NULL );

    int n;
    while( cin >> n ) {
        for( int i = 0 ; i < n ; ++i ) {
            cin >> t[i];
        }

        sort( t, (t + n) );

        int counter = 0, waitTime = 0;
        for( int i = 0 ; i < n ; ++i ) {
            if( t[i] >= waitTime ) {
                waitTime += t[i];
                ++counter;
            }
        }

        cout << counter << "\n";
    }
    return 0;
}