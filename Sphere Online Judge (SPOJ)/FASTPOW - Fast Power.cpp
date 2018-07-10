#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll bigMod( ll a, ll x, ll mod ) {
    if( x == 0 ) return 1;
    if( ( x & 1 ) == 1 ) return ( ( a * bigMod( a, ( x - 1 ), mod ) ) % mod );
    else {
        ll s = bigMod( a, ( x >> 1 ), mod );
        return ( ( s * s ) % mod );
    }
}

int main( int argc, char ** argv ) {
//    freopen( "in.txt", "r", stdin );
//    freopen( "out.txt", "w", stdout );

    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    ll A, B, C;
    while( cin >> A >> B >> C ) {
        cout << bigMod( A, B, C ) << "\n";
    }

    return 0;
}
