#include<stdio.h>
int main()
{
    long long int num1, num2;
    while ( scanf("%lld %lld", &num1, &num2)==2 )
    {
        if ( num1>num2 )
            printf("%lld\n", num1-num2);
        else
            printf("%lld\n", num2-num1);
    }
    return 0;
}
