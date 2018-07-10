#include <stdio.h>

int GCD(int a, int b)
{
    if( b==0 )
        return a;

    return GCD(b, a%b);
}

int main()
{
    int STEP, MOD;

    while( scanf("%d %d", &STEP, &MOD)==2 )
    {
        if( GCD(STEP, MOD)==1 )
            printf("%10d%10d    Good Choice\n\n", STEP, MOD);
        else
            printf("%10d%10d    Bad Choice\n\n", STEP, MOD);
    }
    return 0;
}
