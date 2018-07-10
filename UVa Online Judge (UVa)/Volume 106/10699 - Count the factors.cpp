#include <cstdio>
#include <cmath>

const int S = 10000005;
bool prime[S];

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<S ; i++) prime[i] = true;

    int temp = sqrt(S);
    for(int i=2 ; i<=temp ; i++)
        if( prime[i] )
            for(int j=i+i ; j<S ; j+=i) prime[j] = false;

    int N;

    while( scanf("%d", &N)!=EOF && N )
    {
        int counter = 0;

        if( prime[N] ) counter = 1;
        else
        {
            temp = N/2;
            for(int i=2 ; i<=temp ; i++)
                if( prime[i] && !(N%i) ) counter++;
        }
        printf("%d : %d\n", N, counter);
    }
    return 0;
}
