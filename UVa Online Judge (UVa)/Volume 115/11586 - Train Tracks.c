#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    char dump;

    scanf("%d%c", &tc, &dump);
    while( tc-- )
    {
        char track_pieces[1000];
        gets(track_pieces);

        int i, len = strlen(track_pieces), M = 0, F = 0;
        for(i=0 ; i<len ; i++)
        {
            if( track_pieces[i]=='F' )
                F++;
            if( track_pieces[i]=='M' )
                M++;
        }
        if( F==M && F!=1 && M!=1 )
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}
