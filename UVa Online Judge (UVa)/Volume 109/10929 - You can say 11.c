#include <stdio.h>
#include <string.h>

int main()
{
    char N[10005];

    while( scanf("%s", N)==1 )
    {
        int len = strlen(N);

        if( N[0]=='0' && len==1 )
            break;

        int i, flag = 0;
        for(i=0 ; i<len ; i++)
            flag = (flag*10 + N[i]-'0')%11;

        if( flag==0 )
            printf("%s is a multiple of 11.\n", N);
        else
            printf("%s is not a multiple of 11.\n", N);
    }
    return 0;
}
