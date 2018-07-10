#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;

struct coordinate {
    double x, y;
} point[MAXN+2];

double distance( double x1, double y1, double x2, double y2 ) {
    return ( sqrt( (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) ) );
}

struct data {
    int x, y;
    double cost;
    bool operator < (const data &temp ) const {
        return (cost < temp.cost);
    }
};

vector <data> edge;
int pr[MAXN+2];

int findParent( int node ) {
    return ( (pr[node] == node) ? node : findParent( pr[node] ) );
}

double mst( int n ) {
    sort( edge.begin(), edge.end() );
    for( int i = 0 ; i <= MAXN ; ++i ) pr[i] = i;

    double cost = 0.0;
    int counter = 0;
    for( int i = 0 ; i < edge.size() ; ++i ) {
        int x = findParent( edge[i].x );
        int y = findParent( edge[i].y );
        if( x != y ) {
            pr[x] = y;
            ++counter;
            cost += edge[i].cost;
            if( counter == (n - 1) ) break;
        }
    }
    return cost;
}

int main( int argc, char ** argv ) {
    int T;
    scanf( "%d", &T );
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        int n;
        scanf( "%d", &n );
        for( int i = 1 ; i <= n ; ++i ) scanf( "%lf %lf", &point[i].x, &point[i].y );

        for( int i = 0 ; i <= n ; ++i ) edge.clear();

        for( int i = 1 ; i <= n ; ++i )
            for( int j = i + 1 ; j <= n ; ++j ) {
                double c = distance( point[i].x, point[i].y, point[j].x, point[j].y );
                data get;
                get.x = i, get.y = j, get.cost = c;
                edge.push_back( get );
                get.x = j, get.y = i, get.cost = c;
                edge.push_back( get );
            }

        if( nCase != 1 ) puts( "" );
        printf( "%0.2lf\n", mst( n ) );
    }
    return 0;
}
