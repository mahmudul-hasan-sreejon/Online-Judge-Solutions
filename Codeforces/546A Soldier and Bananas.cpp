#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    //freopen( "input.txt", "r", stdin );

    int k, w;
    long long n;

    cin >> k >> n >> w;

    long long temp = (long long) k;
    for( int i = 2 ; i <= w ; ++i ) {
        temp += ( i*k );
    }

    if( temp - n <= 0 ) puts( "0" );
    else cout << temp - n  << endl;

    return 0;
}