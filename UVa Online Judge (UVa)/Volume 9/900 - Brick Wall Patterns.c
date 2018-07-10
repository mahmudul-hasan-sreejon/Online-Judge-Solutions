#include<stdio.h>
int main()
{
    long int len, i, pat, a, b;

    while( (scanf("%ld", &len)==1) && len!=0 )
    {
        pat = 0;
        a = 0;
        b = 1;
        for(i=1 ; i<=len ; i++)
        {
            pat = a+b;
            a = b;
            b = pat;
        }
        printf("%ld\n", pat);
    }
    return 0;
}
