#include <bits/stdc++.h>

using namespace std;

vector <int> v;

int main( int argc, char ** argv ) {
    // freopen( "input.txt", "r", stdin );

    int n;
    cin >> n;
    for( int i = 1 ; i <= n ; ++i ) {
        int temp;
        cin >> temp;
        v.push_back( temp );
    }

    int sum1 = accumulate( v.begin(), v.end(), 0 );
    sort( v.begin(), v.end() );

    for( int i = 1 ; i < v.size() ; ++i ) {
        if( v[i-1] == v[i] ) ++v[i];
        if( v[i-1] > v[i] ) v[i] = v[i-1] + 1;
    }
    int sum2 = accumulate( v.begin(), v.end(), 0 );

    cout << (sum2 - sum1) << endl;

    return 0;
}