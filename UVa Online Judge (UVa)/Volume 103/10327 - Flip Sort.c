#include <stdio.h>

int main()
{
    int len;

    while( scanf("%d", &len)==1 )
    {
        int i, L[1000];
        for(i=0 ; i<len ; i++)
            scanf("%ld", &L[i]);

        int j, M = 0;
        for(i=1 ; i<len ; i++)
            for(j=0 ; j<i ; j++)
                if( L[j]>L[i] )
                    M++;

        printf("Minimum exchange operations : %d\n", M);
    }
    return 0;
}
