#include <stdio.h>
int main()
{
    long long int num, sum;
    while( scanf("%lld", &num)==1 )
    {
        sum = ((num*(num+2))/2)*3-6;
        printf("%lld\n", sum);
    }
    return 0;
}
