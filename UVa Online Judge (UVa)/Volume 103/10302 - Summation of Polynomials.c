#include <stdio.h>

int main()
{
    long long x;

    while( scanf("%lld", &x)==1 )
        printf("%lld\n", (x*x*(x+1)*(x+1))/4);

    return 0;
}
