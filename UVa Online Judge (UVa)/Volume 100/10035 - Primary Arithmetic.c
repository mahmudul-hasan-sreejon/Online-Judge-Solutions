#include<stdio.h>
long int carry(long int n1, long int n2)
{
    long int c=0, t=0;
    while( n1>0 || n2>0 )
    {
        t = ( (n1%10)+(n2%10)+t )/10;
        n1 = n1/10;
        n2 = n2/10;
        c = c+t;
    }
    return c;
}
int main()
{
    long int a, b, count;
    
    while( scanf("%ld %ld", &a, &b)==2 && a+b!=0 )
    {
        count = carry(a, b);

        if( count==0 )
            printf("No carry operation.\n");
        else if( count==1 )
            printf("1 carry operation.\n");
        else
            printf("%ld carry operations.\n", count);
    }
    return 0;
}
