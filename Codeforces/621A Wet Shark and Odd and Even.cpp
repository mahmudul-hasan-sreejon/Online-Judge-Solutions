#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    long long n;
    cin >> n;

    long long odd = LLONG_MAX, sum = 0;
    for( int i = 1 ; i <= n ; ++i ) {
        long long input;
        cin >> input;

        if( input & 1 ) {
            odd = min( odd, input );
        }
        sum += input;
    }

    if( !(sum & 1) ) {
        cout << sum << "\n";
    }
    else {
        cout << (sum - odd) << "\n";
    }

    return 0;
}