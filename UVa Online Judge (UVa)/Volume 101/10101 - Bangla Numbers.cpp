#include <cstdio>

const char unit[10][8] = {"", " shata", " hajar", " lakh", " kuti", " shata", " hajar", " lakh", " kuti"};

int main()
{
    long long n, nCase = 1;

    while( scanf("%lld", &n)!=EOF )
    {
        printf("%4lld.", nCase);
        if( n==0 ) printf(" %lld\n", n);
        else
        {
            long long carry, temp = n, div = 100000000000000;
            for(int i=8 ; i>=0 ; i--)
            {
                carry = temp/div;
                if( carry>0 )
                {
                    printf(" %lld%s", carry, unit[i]);
                    temp -= carry*div;
                }
                else if( i==4 && carry==0 && n>10000000 ) printf("%s", unit[i]);
                if( i==6 || i==2 ) div /= 10;
                else div /= 100;
                if( div==0 ) break;
            }
            printf("\n");
        }
        ++nCase;
    }
    return 0;
}
