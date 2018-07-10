#include <stdio.h>

int main()
{
    int n;

    while( scanf("%d", &n)==1 && n!=0 )
    {
        int bottle = 0;
        while( n>=3 )
        {
            n -= 3;
            bottle++;
            n++;
        }

        if( n==2 )
            bottle++;

        printf("%d\n", bottle);
    }
    return 0;
}
