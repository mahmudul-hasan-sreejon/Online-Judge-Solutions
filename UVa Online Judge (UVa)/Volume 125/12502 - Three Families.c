#include<stdio.h>
int main()
{
    int T, i, x, y, z, B;

    scanf("%d", &T);
    for(i=1 ; i<=T ; i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        B = z*(x+(x-y))/(x+y);

        if( B<=0 )
            printf("0\n");
        else
            printf("%d\n", B);
    }
    return 0;
}
