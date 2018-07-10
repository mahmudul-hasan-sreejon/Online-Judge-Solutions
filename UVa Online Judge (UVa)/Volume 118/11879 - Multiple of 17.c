#include <stdio.h>
#include <string.h>

int main()
{
    char n[10005];

    while( scanf("%s", n)==1 && strcmp(n, "0") )
    {
        int i, len = strlen(n), flag = 0;
        for(i=0 ; i<len ; i++)
            flag = (flag*10 + n[i]-'0')%17;

        if( flag==0 )
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
