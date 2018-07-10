#include <stdio.h>

int main()
{
    int N;

    while( scanf("%d", &N)==1 && N!=0 )
    {
        int i, sum = 0;
        for(i=1 ; i<=N ; i++)
            sum += i*i;

        printf("%d\n", sum);
    }
    return 0;
}
