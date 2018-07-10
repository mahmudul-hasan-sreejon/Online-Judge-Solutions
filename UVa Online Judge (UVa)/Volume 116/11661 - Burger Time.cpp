#include <cstdio>

char S[2000005];

int main()
{
    int L;
    char dump;

    while( scanf("%d%c", &L, &dump)==2 && L )
    {
        gets(S);

        int R = -1, D = -1, min_distance = 2000001;
        for(int I=0 ; I<L ; I++)
        {
            if( S[I]=='Z' )
            {
                min_distance = 0;
                break;
            }
            else if( S[I]=='R' )
            {
                R = I;
                if( D>-1 )
                    if( I-D<min_distance ) min_distance = I-D;
            }
            else if( S[I]=='D' )
            {
                D = I;
                if( R>-1 )
                    if( I-R<min_distance ) min_distance = I-R;
            }
        }

        printf("%d\n", min_distance);
    }
    return 0;
}
