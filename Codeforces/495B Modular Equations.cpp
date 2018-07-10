#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    int a, b;
    cin >> a >> b;
    if( a < b ) cout << 0 << "\n";
    else if( a == b ) cout << "infinity\n";
    else {
        int temp = (a - b), counter = 0;
        for( int x = 1 ; x <= sqrt( temp ) ; ++x )
            if( temp % x == 0 ) {
                if( b < x ) ++counter;
                if( (temp / x) > b && (temp / x) != x ) ++counter;
            }

        cout << counter << "\n";
    }

    return 0;
}