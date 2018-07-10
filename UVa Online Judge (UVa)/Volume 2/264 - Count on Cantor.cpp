#include <cstdio>

int main()
{
    int n;

    while( scanf("%d", &n)!=EOF )
    {
        int div = 1, term = 1;
        while( term<n ) term += ++div;

        int numerator, denominator;
        if( div%2 )
        {
            numerator = (term-n)+1;
            denominator = div-(term-n);
        }
        else
        {
            numerator = div-(term-n);
            denominator = (term-n)+1;
        }

        printf("TERM %d IS %d/%d\n", n, numerator, denominator);
    }
    return 0;
}