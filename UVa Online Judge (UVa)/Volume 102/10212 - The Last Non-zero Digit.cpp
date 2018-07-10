#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long N, M;

    while( cin >> N >> M )
    {
        if( M==0 ) cout << "1" << endl;
        else
        {
            long i, result = 1;
            for(i=N ; i>=(N-M)+1 ; i--)
            {
                result *= i;
                while( result%10==0 ) result /= 10;
                result %= 1000000000;
            }
            cout << result%10 << endl;
        }
    }
    return 0;
}
