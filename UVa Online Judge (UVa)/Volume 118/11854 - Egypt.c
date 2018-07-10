#include<stdio.h>
int main()
{
    long int a, b, c;

    while( scanf("%ld %ld %ld", &a, &b, &c)==3 && a+b+c!=0 )
    {
        if( (a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(b*b)+(a*a) )
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
