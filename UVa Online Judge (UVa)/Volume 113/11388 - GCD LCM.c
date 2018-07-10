#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        long long G, L;
        scanf("%lld %lld", &G, &L);

        long long a = 1, b, num = 1, flag = 1;
        while( a<=L && flag==1 )
        {
            a = G*num;
            b = (G*L)/a;
            if( b%G==0 && L%b==0 )
                flag = 0;
            num++;
        }

        if( flag==0 )
            printf("%lld %lld\n", a, b);
        else
            printf("-1\n");
    }
    return 0;
}
