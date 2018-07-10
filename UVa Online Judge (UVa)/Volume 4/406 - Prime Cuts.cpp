#include <cstdio>
#include <cmath>

const int S = 1005;
bool prime[S];
int listPrime[S], N, C, length;

void show_output()
{
    int print = ( length%2==0 ) ? C*2 : (C*2)-1;

    printf("%d %d:", N, C);
    if( print>length )
        for(int i=1 ; i<=length ; i++) printf(" %d", listPrime[i]);
    else
    {
        int mid = ( length%2==0 ) ? length/2 : (length/2)+1;
        mid -= ( length%2==0 ) ? (print/2)-1 : print/2;
        length = print+mid-1;
        for(int i=mid ; i<=length ; i++) printf(" %d", listPrime[i]);
    }
    printf("\n\n");
}

int main()
{
    prime[0] = false;
    for(int i=1 ; i<S ; i++) prime[i] = true;

    int temp = sqrt(S);
    for(int i=2 ; i<=temp ; i++)
        if( prime[i] )
            for(int j=i+i ; j<S ; j+=i) prime[j] = false;

    while( scanf("%d %d", &N, &C)!=EOF )
    {
        length = 0;
        for(int i=1 ; i<=N ; i++)
            if( prime[i] ) listPrime[++length] = i;

        show_output();
    }
    return 0;
}
