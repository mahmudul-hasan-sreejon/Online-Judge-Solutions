#include <cstdio>
#include <iostream>

using namespace std;

long factorial[13] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};

int main()
{
    int n, k;

    while( cin >> n >> k )
    {
        int coefficient = factorial[n];
        for(int i=0 ; i<k ; i++)
        {
            int div;
            cin >> div;

            if( div>1 ) coefficient /= factorial[div];
        }

        cout << coefficient << endl;
    }
    return 0;
}
