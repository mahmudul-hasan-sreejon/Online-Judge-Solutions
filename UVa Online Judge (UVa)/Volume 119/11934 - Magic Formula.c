#include<stdio.h>
int main()
{
    long int a, b, c, d, n, i, l, f;

    while( scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &d, &l) && ( (a+b+c+d+l)!=0 ) )
    {
        n=0;
        for(i=0 ; i<=l ; i++)
        {
            f = (a*i*i) + (b*i) + c;
            if( f%d==0 )
                n++;
        }
        printf("%ld\n", n);
    }
    return 0;
}
