#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2000;
int a[MAXN+2], result[MAXN+2];
set <int> si;
set <int> :: iterator is;
vector <int> v;

int main( int argc, char ** argv ) {
    //freopen( "input.txt", "r", stdin );

    int n;
    scanf( "%d", &n );
    for( int i = 1 ; i <= n ; ++i ) {
        scanf( "%d", &a[i] );
        si.insert( a[i] );
    }

    for( is = si.begin() ; is != si.end() ; ++is ) v.push_back( *is );
    sort( v.begin(), v.end(), greater <int> () );

    int rate = 1;
    for( int i = 0 ; i < v.size() ; ++i ) {
        int cnt = 0;
        for( int j = 1 ; j <= n ; ++j ) {
            if( v[i] == a[j] ) {
                result[j] = rate;
                cnt++;
            }
        }
        rate += cnt;
    }

    for( int i = 1 ; i <= n ; ++i ) printf( "%d ", result[i] );

    return 0;
}