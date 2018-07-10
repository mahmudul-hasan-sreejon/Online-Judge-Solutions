#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    long long n;
    cin >> n;

    --n;
    for( long long i = 1 ; i <= n ; ++i ) n -= i;

    cout << (++n) << "\n";

    return 0;
}