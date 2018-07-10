#include <cstdio>

bool prime[10000005];

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<10000005 ; i++) prime[i] = true;

    for(int i=2 ; i*i<10000005 ; i++)
        if( prime[i] )
            for(int j=i+i ; j<10000005 ; j+=i) prime[j] = false;

    int N;

    while( scanf("%d", &N)==1 )
    {
        if( N>=8 )
        {
            if( N%2 )
            {
                printf("2 3 ");
                N -= 5;
            }
            else
            {
                printf("2 2 ");
                N -= 4;
            }
            for(int i=2 ; i<=N ; i++)
                if( prime[i] && prime[N-i] )
                {
                    printf("%d %d\n", i, N-i);
                    break;
                }
        }
        else printf("Impossible.\n");
    }
    return 0;
}
