#include<stdio.h>
int main()
{
    long int tc, i, a, b, c;

    scanf("%ld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%ld %ld %ld", &a, &b, &c);

        if( ((a+b)<=c) || ((b+c)<=a) || ((c+a)<=b) )
            printf("Case %ld: Invalid\n", i);
        else if( a<=0 || b<=0 || c<=0 )
            printf("Case %ld: Invalid\n", i);
        else if( a==b && b==c && c==a )
            printf("Case %ld: Equilateral\n", i);
        else if( a==b || b==c || c==a )
            printf("Case %ld: Isosceles\n", i);
        else
            printf("Case %ld: Scalene\n", i);
    }
    return 0;
}
