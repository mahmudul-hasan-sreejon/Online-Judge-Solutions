#include <cstdio>

bool prime[1000005];

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<1000005 ; i++) prime[i] = true;

    for(int i=2 ; i*i<1000005 ; i++)
        if( prime[i] )
            for(int j=i+i ; j<1000005 ; j+=i) prime[j] = false;

    int n;

    while( scanf("%d", &n)==1 && n )
    {
        int counter = 0;
        for(int i=2 ; i<=n-i ; i++)
            if( prime[i] && prime[n-i] ) counter++;

        printf("%d\n", counter);
    }
    return 0;
}
