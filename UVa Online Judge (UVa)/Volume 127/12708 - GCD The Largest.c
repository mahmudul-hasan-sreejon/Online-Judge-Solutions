#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        long long N;
        scanf("%lld", &N);

        printf("%lld\n", N/2);
    }
    return 0;
}
