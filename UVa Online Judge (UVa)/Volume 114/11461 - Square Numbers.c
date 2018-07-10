#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    while( scanf("%d %d", &a, &b)==2 && a+b!=0 )
    {
        int i, counter = 0;
        for(i=a ; i<=b ; i++)
        {
            int temp = sqrt(i);
            if( temp*temp==i )
                counter++;
        }

        printf("%d\n", counter);
    }
    return 0;
}
