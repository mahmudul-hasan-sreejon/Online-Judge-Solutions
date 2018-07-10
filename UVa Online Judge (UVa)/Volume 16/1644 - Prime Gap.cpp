#include <cstdio>

bool prime[1299713];

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<1299713 ; i++) prime[i] = true;

    for(int i=2 ; i*i<1299713 ; i++)
        if( prime[i] )
            for(int j=i+i ; j<1299713 ; j+=i) prime[j] = false;

    int k;

    while( scanf("%d", &k)==1 && k )
    {
        if( prime[k] ) printf("0\n");
        else
        {
            int n;
            for(int i=k-1 ; ; i--)
                if( prime[i] )
                {
                    n = i;
                    break;
                }

            int p;
            for(int i=k+1 ; ; i++)
                if( prime[i] )
                {
                    p = i;
                    break;
                }

            printf("%d\n", p-n);
        }
    }
    return 0;
}
