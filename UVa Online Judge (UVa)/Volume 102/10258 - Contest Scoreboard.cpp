#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

struct data {
    bool flag;
    int id;
    int nSolved;
    int time;
    int penalty[10];
    bool solved[10];
} contestants[MAXN];

bool cmp( data a, data b ) {
    if( a.nSolved > b.nSolved ) {
        return (true);
    }
    else if( (a.nSolved == b.nSolved) && (a.time < b.time) ) {
        return (true);
    }
    else if( (a.nSolved == b.nSolved) && (a.time == b.time) && (a.id < b.id) ) {
        return (true);
    }
    else {
        return (false);
    }
}

int main( int argc, char ** argv ) {
    int tc;
    scanf( "%d ", &tc );
    for( int nCase = 1 ; nCase <= tc ; ++nCase ) {
        for( int i = 0 ; i < MAXN ; ++i ) {
            contestants[i].flag = false;
            contestants[i].id = i;
            contestants[i].nSolved = 0;
            contestants[i].time = 0;
            memset( contestants[i].penalty, 0, sizeof( contestants[i].penalty ) );
            memset( contestants[i].solved, false, sizeof( contestants[i].solved ) );
        }

        string input;
        while( getline( cin, input ) && input.size() ) {
            stringstream ss( input );

            int x, y, z;
            char L;
            ss >> x >> y >> z >> L;

            contestants[x].flag = true;
            if( L == 'I' && !contestants[x].solved[y] ) {
                contestants[x].penalty[y] += 20;
            }
            if( L == 'C' && !contestants[x].solved[y] ) {
                contestants[x].solved[y] = true;
                contestants[x].penalty[y] += z;
            }
        }

        for( int i = 0 ; i < MAXN ; ++i ) {
            if( contestants[i].flag ) {
                for( int j = 1 ; j <= 9 ; ++j ) {
                    if( contestants[i].solved[j] ) {
                        contestants[i].nSolved++;
                        contestants[i].time += contestants[i].penalty[j];
                    }
                }
            }
        }

        sort( contestants, contestants + MAXN, cmp );

        if( nCase > 1 ) puts( "" );
        for( int i = 0 ; i < MAXN ; ++i ) {
            if( contestants[i].flag ) {
                printf( "%d %d %d\n", contestants[i].id, contestants[i].nSolved, contestants[i].time );
            }
        }
    }
    return 0;
}
