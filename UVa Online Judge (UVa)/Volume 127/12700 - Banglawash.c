#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    int ncase = 0;
    while( tc-- )
    {
        int len;
        scanf("%d", &len);

        int total = len;

        char s1[12];
        scanf("%s", s1);

        int i, B = 0, W = 0, T = 0, A = 0;
        for(i=0 ; i<len ; i++)
        {
            if( s1[i]=='B' )
                B++;
            else if( s1[i]=='W' )
                W++;
            else if( s1[i]=='T' )
                T++;
            else if( s1[i]=='A' )
                A++;
        }

        if( B+A==len && B!=0 )
            printf("Case %d: BANGLAWASH\n", ++ncase);
        else if( W+A==len && W!=0 )
            printf("Case %d: WHITEWASH\n", ++ncase);
        else if( A==len )
            printf("Case %d: ABANDONED\n", ++ncase);
        else if( B>W )
            printf("Case %d: BANGLADESH %d - %d\n", ++ncase, B, W);
        else if( W>B )
            printf("Case %d: WWW %d - %d\n", ++ncase, W, B);
        else if( B==W )
            printf("Case %d: DRAW %d %d\n", ++ncase, B, T);
    }
    return 0;
}
