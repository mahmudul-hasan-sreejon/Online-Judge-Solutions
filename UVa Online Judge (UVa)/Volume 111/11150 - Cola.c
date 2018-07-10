#include <stdio.h>

int main()
{
    int  N;
    while( scanf("%d", &N)==1 )
    {
        int bottle = N;
        while( N>=3 )
        {
            bottle = bottle + N/3;
            N = (N/3) + (N%3);
        }
        if( N==2 )
            bottle++;

        printf("%d\n", bottle);
    }
    return 0;
}
