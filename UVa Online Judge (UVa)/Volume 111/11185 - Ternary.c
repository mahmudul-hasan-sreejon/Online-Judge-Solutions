#include <stdio.h>

int main()
{
    int  N, ternary[1001];

    while( scanf("%d", &N)==1 && N>=0 )
    {
        if( N==0 )
            printf("0\n");
        else
        {
            int i = 0;
            while( N!=0 )
            {
                ternary[i++] = N%3;
                N /= 3;
            }

            int j;
            for(j=i-1 ; j>=0 ; j--)
                printf("%d", ternary[j]);
            printf("\n");
        }
    }
    return 0;
}
