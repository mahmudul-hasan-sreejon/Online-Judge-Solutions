#include <cstdio>
#include <cmath>

const int S = 1000005;
bool prime[S];
int N, p1, p2;

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<S ; i++) prime[i] = true;

    int temp = sqrt(S);
    for(int i=2 ; i<=temp ; i++)
        if( prime[i] )
            for(int j=i+i ; j<S ; j+=i) prime[j] = false;

    while( scanf("%d", &N)==1 && N )
    {
        printf("%d:\n", N);

        p1 = p2 = 0;
        for(int i=2 ; i<=N ; i++)
        {
            if( prime[i] )
            {
                p1 = i;
                if( prime[N-i] )
                {
                    p2 = N-i;
                    break;
                }
            }
        }

        if( p1 && p2 ) printf("%d+%d\n", p1, p2);
        else printf("NO WAY!\n");
    }
    return 0;
}
