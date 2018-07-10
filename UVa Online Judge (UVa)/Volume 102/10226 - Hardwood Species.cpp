#include <bits/stdc++.h>

using namespace std;

string name;
map <string, int> msi;
map <string, int> :: iterator mit;

int main( int argc, char ** argv ) {
    // freopen( "in.txt", "r", stdin );

    int tc;
    scanf( "%d ", &tc );
    for( int nCase = 1 ; nCase <= tc ; ++nCase ) {
        msi.clear();
        int total = 0;
        while( getline( cin, name ) && name.size() ) {
            ++msi[name];
            ++total;
        }

        if( nCase > 1 ) puts( "" );
        for( mit = msi.begin() ; mit != msi.end() ; ++mit ) {
            double result = ((double) (mit->second * 100) ) / ((double) total);
            cout << mit->first << " " << fixed << setprecision( 4 ) << result << endl;
        }
    }
    return 0;
}
