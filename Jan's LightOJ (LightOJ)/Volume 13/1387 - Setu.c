#include <stdio.h>
#include <string.h>
 
int main ()
{
    long int test, i, Q, amount, j, K;
    char comment[101];
 
    scanf("%ld", &test);
    for(i=1 ; i<=test ; i++)
    {
        scanf("%ld", &Q);
        printf("Case %ld:\n", i);
        amount = 0;
        for(j=1 ; j<=Q ; j++)
        {
            scanf("%s", comment);
            if( strcmp(comment, "donate")==0 )
            {
                scanf("%ld", &K);
                amount += K;
            }
            else if( strcmp(comment, "report")==0 )
                printf("%ld\n", amount);
        }
    }
    return 0;
}