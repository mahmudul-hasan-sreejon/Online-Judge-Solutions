#include <cstdio>
#include <cmath>

const int SZ = 1000005;
bool prime[SZ];
int temp, tc, L, H;
int ans[SZ], len;

bool divCheck(int num)
{
    int counter = 0;
    for(int j=1 ; j*j<=num ; j++)
        if( num%j==0 )
        {
            counter++;
            if( j!=(num/j) ) counter++;
        }
    return prime[counter];
}

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<SZ ; i++) prime[i] = true;

    temp = sqrt(SZ);
    for(int i=2 ; i<=temp ; i++)
        if( prime[i] )
            for(int j=i+i ; j<SZ ; j+=i) prime[j] = false;

    scanf("%d", &tc);
    while( tc-- )
    {
        scanf("%d %d", &L, &H);

        len = 0;
        for(int i=L ; i<=H ; i++)
        {
            if( i==1 ) continue;
            if( divCheck(i) ) ans[len] = i, len++;
        }

        if( !len ) printf("-1");
        else
            for(int i=0 ; i<len ; i++)
            {
                if( i!=0 ) printf(" ");
                printf("%d", ans[i]);
            }
        printf("\n");
    }
    return 0;
}
