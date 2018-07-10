#include <stdio.h>

int main()
{
    int n, k;

    while( scanf("%d %d", &n, &k)==2 )
    {
        int result = n;

        while( n>=k )
        {
            result = result + (n/k);
            n = (n/k) + (n%k);
        }

        printf("%d\n", result);
    }
    return 0;
}
