#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int N;
        scanf("%d", &N);

        int i, num[12];
        for(i=0 ; i<10 ; i++)
            num[i] = 0;

        int temp, mod;
        for(i=1 ; i<=N ; i++)
        {
            temp = i;
            while( temp!=0 )
            {
                mod = temp%10;
                temp /= 10;
                num[mod] += 1;
            }
        }

        for(i=0 ; i<9 ; i++)
            printf("%d ", num[i]);
        printf("%d\n", num[9]);
    }
    return 0;
}
