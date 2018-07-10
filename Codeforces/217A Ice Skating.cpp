#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;
vector <pair <int, int>> point;
bool visited[MAXN+2];
int n;

void dfs( int node ) {
    visited[node] = true;
    for( int i = 0 ; i < n ; ++i )
        if( !visited[i] && (point[node].first == point[i].first || point[node].second == point[i].second) ) dfs( i );
}

int main( int argc, char ** argv ) {
    // freopen( "in.txt", "r", stdin );

    scanf( "%d", &n );
    for( int i = 0 ; i < n ; ++i ) {
        int x, y;
        scanf("%d %d", &x, &y);

        point.push_back( make_pair( x , y ) );
    }

    memset( visited, false, sizeof( visited ) );

    int counter = -1;
    for( int i = 0 ; i < n ; ++i )
        if( !visited[i] ) {
            dfs( i );
            ++counter;
        }

    printf( "%d\n", counter );

    return 0;
}