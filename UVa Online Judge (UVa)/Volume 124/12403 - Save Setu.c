#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    int tc, i, K, sum;
    char s[MAX];

    sum=0;
    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%s", s);

        if( strcmp(s, "donate")==0 )
        {
            scanf("%d", &K);
            sum = sum+K;
        }
        else
            printf("%d\n", sum);
    }
    return 0;
}
