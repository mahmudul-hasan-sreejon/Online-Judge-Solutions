#include <cstdio>

bool prime[20000002];
int twin_prime[100002] = {0};

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<20000002 ; i++) prime[i] = true;

    for(int i=2 ; i*i<20000002 ; i++)
        if( prime[i] )
            for(int j=i+i ; j<20000002 ; j+=i) prime[j] = false;

    int pos = 1;
    for(int i=2 ; i<20000002 ; i++)
        if( prime[i-2] && prime[i] ) twin_prime[pos++] = i-2;


    int S;

    while( scanf("%d", &S)==1 )
        printf("(%d, %d)\n", twin_prime[S], twin_prime[S]+2);

    return 0;
}
