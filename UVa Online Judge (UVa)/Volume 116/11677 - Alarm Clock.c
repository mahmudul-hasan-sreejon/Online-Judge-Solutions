#include <stdio.h>

int main()
{
    int H1, M1, H2, M2;

    while( scanf("%d %d %d %d", &H1, &M1, &H2, &M2)==4 && H1+M1+H2+M2!=0 )
    {
        if( M1>M2 )
        {
            M2 += 60;
            H2--;
        }
        if( H1>H2 )
            H2 += 24;

        printf("%d\n", ((M2-M1)+(H2-H1)*60));
    }
    return 0;
}
