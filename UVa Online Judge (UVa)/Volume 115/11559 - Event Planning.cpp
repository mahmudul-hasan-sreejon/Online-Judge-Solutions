#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long N, B, H, W;

    while( cin >> N >> B >> H >> W )
    {
        long cost = 0;
        for(int i=0 ; i<H ; i++)
        {
            long p;
            cin >> p;

            for(int j=1 ; j<=W ; j++)
            {
                long a;
                cin >> a;

                if( a>=N )
                    if( cost==0 || p*N<cost ) cost = p*N;
            }
        }

        if( cost==0 || cost>B ) cout << "stay home" << endl;
        else cout << cost << endl;
    }
    return 0;
}
