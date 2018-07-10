#include <bits/stdc++.h>
 
using namespace std;
 
string cmd, URL;
stack <string> B, F;
 
int main( int argc, char ** argv ) {
    int T;
    cin >> T;
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        while( !B.empty() ) B.pop();
        while( !F.empty() ) F.pop();
        URL = "http://www.lightoj.com/";
 
        cout << "Case "<< nCase << ":" << endl;
        while( cin >> cmd && cmd != "QUIT" ) {
            if( cmd == "BACK" ) {
                if( B.empty() ) puts( "Ignored" );
                else {
                    F.push( URL );
                    URL = B.top();
                    B.pop();
                    cout << URL << endl;
                }
            }
            if( cmd == "FORWARD" ) {
                if( F.empty() ) puts( "Ignored" );
                else {
                    B.push( URL );
                    URL = F.top();
                    F.pop();
                    cout << URL << endl;
                }
            }
            if( cmd == "VISIT" ) {
                B.push( URL );
                cin >> URL;
                while( !F.empty() ) F.pop();
                cout << URL << endl;
            }
        }
    }
    return 0;
}