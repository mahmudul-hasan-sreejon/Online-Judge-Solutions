#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;
bool flag[MAXN + 5];
vector <int> prime;
int factor[MAXN + 5];

int main( int argc, char ** argv ) {
    #ifndef ONLINE_JUDGE
        freopen( "in.txt", "r", stdin );
        freopen( "out.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cout.tie( NULL );
    cin.tie( NULL );

    memset( flag, true, sizeof( flag ) );
    flag[0] = flag[1] = false;

    int sqrtN = sqrt( MAXN );
    for( int i = 2 ; i <= sqrtN ; ++i ) {
        if( flag[i] ) {
            prime.push_back( i );
            for( int j = i + i ; j <= MAXN ; j += i ) {
                flag[j] = false;
            }
        }
    }

    int n;
    while( cin >> n ) {
        memset( factor, 0, sizeof( factor ) );

        int SZ = prime.size();
        for( int i = 1 ; i <= n ; ++i ) {
            int s;
            cin >> s;

            for( int j = 0 ; j < SZ ; ++j ) {
                if( s % prime[j] == 0 ) {
                    ++factor[prime[j]];
                    while( s % prime[j] == 0 ) s /= prime[j];
                }
            }
            if( s > 1 ) ++factor[s];
        }

        int ans = 1;
        for( int i = 0 ; i <= MAXN ; ++i ) {
            ans = max( ans, factor[i] );
        }

        cout << ans << "\n";
    }
    return 0;
}
