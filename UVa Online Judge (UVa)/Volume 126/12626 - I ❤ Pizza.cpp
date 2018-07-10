#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        char line[605];
        cin >> line;

        int M = 0, A = 0, R = 0, G = 0, I = 0, T = 0;
        for(int i=0 ; i<strlen(line) ; i++)
        {
            if( line[i]=='M' ) M++;
            if( line[i]=='A' ) A++;
            if( line[i]=='R' ) R++;
            if( line[i]=='G' ) G++;
            if( line[i]=='I' ) I++;
            if( line[i]=='T' ) T++;
        }

        cout << min(min(min(min(min(M, A/3), R/2), G), I), T) << endl;
    }
    return 0;
}
