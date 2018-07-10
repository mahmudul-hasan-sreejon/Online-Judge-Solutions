#include<stdio.h>
#include<string.h>
int main()
{
    long tc, n, cn;
    char s[7];

    scanf("%ld", &tc);
    cn=1;
    while(tc--)
    {
        scanf("%ld%s", &n, s);

        if( strcmp(s,"Alice")==0 )
        {
            if( n%3==1 )
                printf("Case %ld: Bob\n", cn++);
            else
                printf("Case %ld: Alice\n", cn++);
        }
        else
        {
            if( n%3==0 )
                printf("Case %ld: Alice\n", cn++);
            else
                printf("Case %ld: Bob\n", cn++);
        }
    }
    return 0;
}
