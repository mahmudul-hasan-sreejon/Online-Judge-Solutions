#include<stdio.h>
int main ()
{
    int tc, i, num1, num2;

    while( (scanf("%d", &tc))==1 )
    {
        for(i=1 ; i<=tc ; i++)
        {
            scanf("%d %d", &num1, &num2);

            if( num1<=10 && num2<=10 )
                printf("Case %d: %d\n", i, num1+num2);
        }
        break;
    }
    return 0;
}
