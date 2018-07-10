#include <stdio.h>

int main()
{
    int T;

    while( scanf("%d", &T)==1 && T!=0 )
    {
        int max = -10000, temp = 0, sum = 0;
        while( T-- )
        {
            int L, W, H;
            scanf("%d %d %d", &L, &W, &H);

            if( H>=max )
            {
                temp = L*W*H;
                if( H>max )
                {
                    max = H;
                    sum = temp;
                }
                if( H==max && temp>sum )
                    sum = temp;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
