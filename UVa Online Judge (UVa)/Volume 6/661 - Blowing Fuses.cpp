#include <cstdio>
#include <iostream>

using namespace std;

int consumption[25], state[25];

int main()
{
    int n, m, c;

    int ncase = 0;
    while( cin >> n >> m >> c && n+m+c!=0 )
    {
        for(int i=0 ; i<25 ; i++)
            state[i] = 0;

        for(int i=1 ; i<=n ; i++)
            cin >> consumption[i];

        bool flag = false;
        int result = 0, current = 0;
        for(int i=0 ; i<m ; i++)
        {
            int opration;
            cin >> opration;

            if( flag ) continue;

            state[opration] = 1 - state[opration];

            if( state[opration] ) current += consumption[opration];
            else current -= consumption[opration];

            if( c<current ) flag = true;
            else if ( result<current ) result = current;
        }

        if( flag )
            cout << "Sequence " << ++ncase << "\nFuse was blown.\n" << endl;
        else
            cout << "Sequence " << ++ncase << "\nFuse was not blown.\nMaximal power consumption was " << result << " amperes.\n" << endl;
    }
    return 0;
}
