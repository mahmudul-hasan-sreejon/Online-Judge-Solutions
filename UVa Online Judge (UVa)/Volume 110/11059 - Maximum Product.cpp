#include <cstdio>
#include <iostream>

using namespace std;

int S[20];

int main()
{
    int N, ncase;

    ncase = 0;
    while( cin >> N )
    {
        for(int i=0 ; i<N ; i++) cin >> S[i];

        long long P = 0;
        for(int i=0 ; i<N ; i++)
        {
            long long temp = 1;
            for(int j=i ; j<N ; j++)
            {
                temp *= S[j];
                if( temp>P ) P = temp;
                if( temp==0 ) break;
            }
        }

        cout << "Case #" << ++ncase << ": The maximum product is " << P << ".\n" << endl;
    }
    return 0;
}
