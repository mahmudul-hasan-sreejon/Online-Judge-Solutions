#include <stdio.h>

const int MOD = 131071;

int main()
{
    char ch;

    int num = 0;
    while( (ch=getchar())!=EOF )
    {
        if( ch=='#' )
        {
            if( num==0 )
                printf("YES\n");
            else
                printf("NO\n");
            num = 0;
        }
        else if( ch!='\n' )
            num = (num*2 + ch-'0')%MOD;
    }
    return 0;
}
