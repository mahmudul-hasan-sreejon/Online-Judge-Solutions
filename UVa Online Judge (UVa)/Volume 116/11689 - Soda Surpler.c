#include<stdio.h>
int main()
{
    int tc, i, e, f, c, day, soda, temp;

    scanf("%d", &tc);
    for (i=1 ; i<=tc ; i++)
    {
        scanf("%d %d %d", &e, &f, &c);
        day = e+f;

        soda = 0;
        while ( day>=c )
        {
            temp = day/c;
            soda = soda+temp;
            day = temp+(day%c);
        }
        printf("%d\n", soda);
    }
    return 0;
}
