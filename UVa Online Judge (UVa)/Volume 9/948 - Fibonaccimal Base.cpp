#include <cstdio>

const int SZ = 40;
int fib[SZ], tc, sum;
bool flag;

int main()
{
    fib[0]=0, fib[1]=1;
    for(int i=2 ; i<SZ ; i++) fib[i] = fib[i-1]+fib[i-2];

    scanf("%d", &tc);
    while( tc-- )
    {
        scanf("%d", &sum);

        printf("%d = ", sum);
        flag = false;
        for(int i=SZ-1 ; i>1 ; i--)
        {
            if( sum<fib[i] )
            {
                if( flag ) printf("0");
                continue;
            }
            printf("1");
            sum -= fib[i];
            flag = true;
        }
        printf(" (fib)\n");
    }
    return 0;
}
