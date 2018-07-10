#include <cstdio>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int N;
        scanf("%d", &N);

        bool flag = true;
        for(int i=N-45 ; i<=N ; i++)
        {
            int temp = i, sum = 0;
            while( temp!=0 )
            {
                sum += temp%10;
                temp /= 10;
            }

            if( sum+i==N )
            {
                printf("%d\n", i);
                flag = false;
                break;
            }
        }

        if( flag ) printf("0\n");
    }
    return 0;
}
