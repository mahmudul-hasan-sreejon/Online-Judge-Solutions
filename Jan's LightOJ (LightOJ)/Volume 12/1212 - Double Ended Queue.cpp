#include <bits/stdc++.h>
 
using namespace std;
 
string cmd;
deque <int> dq;
 
int main( int argc, char ** argv ) {
    int T;
    cin >> T;
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        int n, m;
        cin >> n >> m;
 
        dq.clear();
        cout << "Case "<< nCase << ":" << endl;
        while( m-- ) {
            cin >> cmd;
            if( cmd == "pushLeft" ) {
                int x;
                cin >> x;
                if( dq.size() == n ) puts( "The queue is full" );
                else {
                    dq.push_front( x );
                    cout << "Pushed in left: " << x << endl;
                }
            }
            if( cmd == "pushRight" ) {
                int x;
                cin >> x;
                if( dq.size() == n ) puts( "The queue is full" );
                else {
                    dq.push_back( x );
                    cout << "Pushed in right: " << x << endl;
                }
            }
            if( cmd == "popLeft" ) {
                if( dq.empty() ) puts( "The queue is empty" );
                else {
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                }
            }
            if( cmd == "popRight" ) {
                if( dq.empty() ) puts( "The queue is empty" );
                else {
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}