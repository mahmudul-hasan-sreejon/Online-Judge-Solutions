#include <stdio.h>
#include <math.h>

int main()
{
    long n;

    while( scanf("%ld", &n)==1 && n!=0 )
    {
        long temp;
        temp = sqrt(n);

        if( temp*temp==n )
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
