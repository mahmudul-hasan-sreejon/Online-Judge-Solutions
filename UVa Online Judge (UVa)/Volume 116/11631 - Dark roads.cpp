#include <bits/stdc++.h>

using namespace std;

const int MAXM = 200000;
int p[MAXM+2];

struct data {
    int x, y, cost;
    bool operator < ( const data& t ) const {
        return ( cost < t.cost );
    }
} ;

vector < data > edges;

int findParent( int node ) {
    if( p[node] == node ) return (node);
    return ( p[node] = findParent( p[node] ) );
}

int mst( int nNode ) {
    sort( edges.begin(), edges.end() );
    for( int i = 0 ; i < nNode ; ++i ) {
        p[i] = i;
    }

    int nodeCounter = 0, cost = 0;
    for( int i = 0 ; i < edges.size() ; ++i ) {
        int x = findParent( edges[i].x );
        int y = findParent( edges[i].y );
        if( x != y ) {
            p[x] = y;
            ++nodeCounter;
            cost += edges[i].cost;
            if( nodeCounter == (nNode - 1) ) {
                break;
            }
        }
    }
    return (cost);
}

int main( int argc, char ** argv ) {
    int m, n;
    while( scanf( "%d %d", &m, &n ) == 2 && (m && n) ) {
        int totalCost = 0;
        for( int i = 1 ; i <= n ; ++i ) {
            int x, y, z;
            scanf( "%d %d %d", &x, &y, &z );
            data temp;
            temp.x = x, temp.y = y, temp.cost = z;
            edges.push_back( temp );
            totalCost += z;
        }

        int minCost = mst( m );

        printf( "%d\n", (totalCost - minCost) );

        edges.clear();
    }
    return 0;
}
