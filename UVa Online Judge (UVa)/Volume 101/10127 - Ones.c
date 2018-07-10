#include <stdio.h>

int main()
{
    int n;

    while( scanf("%d", &n)==1 )
    {
        int mod = 1%n, counter = 1;
        while( mod!=0 )
        {
            mod = (mod*10 + 1)%n;
            counter++;
        }

        printf("%d\n", counter);
    }
    return 0;
}
