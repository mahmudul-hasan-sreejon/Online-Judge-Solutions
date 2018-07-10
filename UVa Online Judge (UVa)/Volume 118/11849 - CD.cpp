#include <cstdio>
#include <iostream>

using namespace std;

long long jack[10000005];

int main()
{
    long long N, M;

    while( cin >> N >> M && N+M!=0 )
    {
        for(long long i=0 ; i<10000005 ; i++)
            jack[i] = 0;

        long long temp;
        for(long long i=0 ; i<N ; i++)
        {
            cin >> temp;
            jack[temp] = 1;
        }

        long long jill, same = 0;
        for(long long i=0 ; i<M ; i++)
        {
            cin >> jill;
            if( jack[jill]==1 )
                ++same;
        }

        cout << same << endl;
    }
    return 0;
}
