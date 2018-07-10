#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2000;
vector < int > v[MAXN + 2];
vector < int > source;

int dfs( int node ) {
    int ret = 0;
    for( int i = 0 ; i < v[node].size() ; ++i ) {
        int now = v[node][i];
        ret = max( ret, dfs( now ) );
    }
    return (ret + 1);
}

int main( int argc, char ** argv ) {
    int n;
    scanf( "%d", &n );
    for( int i = 1 ; i <= n ; ++i ) {
        int p;
        scanf( "%d", &p );

        if( p == -1 ) {
            source.push_back( i );
            v[p].push_back( 0 );
        }
        else {
            v[p].push_back( i );
        }
    }

    int result = 0;
    for( int i = 0 ; i < source.size() ; ++i ) {
        result = max( result, dfs( source[i] ) );
    }

    printf( "%d\n", result );
    return 0;
}