#include <bits/stdc++.h>

using namespace std;

const int MAXN = 750;
const int MAXM = 1000;

struct coordinate {
    double x, y;
} point[MAXN+2];

double cost[MAXN+2][MAXN+2];
bool visited[MAXN+2][MAXN+2];

double distance( double x1, double x2, double y1, double y2 ) {
    return ( sqrt( ((x1- x2) * (x1- x2)) + ((y1- y2) * (y1- y2)) ) );
}

struct data {
    int x, y;
    double cost;
    bool operator <( const data & t ) const {
        return ( cost < t.cost );
    }
};

vector < data > edge;
int pr[MAXN+2];

int findParent( int node ) {
   return ( pr[node] == node ) ? node : findParent( pr[node] );
}

int nodeCounter;

double mst( int n ) {
	sort( edge.begin(), edge.end() );

	double minCost = 0.0;
	for( int i = 0 ; i < edge.size() ; ++i ) {
		int x = findParent( edge[i].x );
		int y = findParent( edge[i].y );
		if( x != y ) {
			pr[x] = y;
			++nodeCounter;
			minCost += edge[i].cost;
			if( nodeCounter == (n - 1) ) {
                break;
			}
		}
	}
	return  minCost;
}

int main( int argc, char ** argv ) {
    int N, M;
    while( scanf( "%d", &N ) != EOF ) {
        for( int i = 0 ; i <= MAXN ; ++i ) point[i].x = 0.0, point[i].y = 0.0;
        memset( cost, 0.0, sizeof( cost ) );
        memset( visited, false, sizeof( visited ) );
        edge.clear();

        for( int i = 1 ; i <= N ; ++i ) scanf( "%lf %lf", &point[i].x, &point[i].y );

        for( int i = 1 ; i <= N ; ++i )
            for( int j = i + 1 ; j <= N ; ++j ) cost[i][j] = cost[j][i] = distance( point[i].x, point[j].x, point[i].y, point[j].y );

        for( int i = 1 ; i <= N ; ++i )
            for( int j = 1 ; j <= N ; ++j )
                if( i != j && !visited[i][j] ) {
                    data get;
                    get.x = i, get.y = j, get.cost = cost[i][j];
                    edge.push_back( get );

                    get.x = j, get.y = i, get.cost = cost[j][i];
                    edge.push_back( get );

                    visited[i][j] = visited[j][i] = true;
                }

        for( int i = 1 ; i <= N ; ++i ) pr[i] = i;

        scanf( "%d", &M );
        nodeCounter = 0;
        for( int i = 1 ; i <= M ; ++i ) {
            int x, y;
            scanf( "%d %d", &x, &y );
            x = findParent( x );
            y = findParent( y );
            if( x != y ) {
                pr[x] = y;
                ++nodeCounter;
            }
        }

        double ans = mst( N );
        printf( "%.2f\n", ans );
    }
    return 0;
}
