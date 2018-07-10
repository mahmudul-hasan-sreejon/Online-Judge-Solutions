#include <stdio.h>

int main()
{
    int  tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        int len;
        scanf("%d", &len);

        int a[len], i;
        for(i=0 ; i<len ; i++)
            scanf("%d", &a[i]);

        printf("Case %d: %d\n", ++ncase, a[len/2]);
    }
    return 0;
}
