#include <bits/stdc++.h>
 
using namespace std;
 
const int MAXN = 1e5;
vector <int> edge[MAXN+5];
bool visited[MAXN+5];
 
int bfs( int source ) {
    queue <int> q, level;
    q.push( source ), visited[source] = true;
 
    bool flag = true;
    int vampire = 0, lykan = 0, counter = 1;
    while( !q.empty() ) {
        if( level.empty() ) {
            level = q;
            if( flag ) vampire += counter;
            else lykan += counter;
            flag = !flag;
            counter = 0;
        }
        level.pop();
 
        int u = q.front();
        q.pop();
        for( int i = 0 ; i < edge[u].size() ; ++i ) {
            int v = edge[u][i];
            if( !visited[v] ) {
                visited[v] = true;
                q.push( v );
                ++counter;
            }
        }
    }
 
    return ( max( vampire, lykan ) );
}
 
int main( int argc, char ** argv ) {
    int T, nCase = 1;
    scanf( "%d", &T );
    while( T-- ) {
        for( int i = 0 ; i <= MAXN ; ++i ) {
            edge[i].clear();
            visited[i] = false;
        }
        set <int> si;
 
        int n;
        scanf( "%d", &n );
        for( int i = 1 ; i <= n ; ++i ) {
            int u, v;
            scanf( "%d %d", &u, &v );
 
            edge[u].push_back( v );
            edge[v].push_back( u );
            si.insert( u );
            si.insert( v );
        }
 
        int counter = 0;
        for( set <int> :: iterator sit = si.begin() ; sit != si.end() ; ++sit ) {
            if( !visited[*sit] ) counter += bfs( *sit );
        }
 
        printf( "Case %d: %d\n", nCase, counter );
        ++nCase;
    }
    return 0;
}