#include <cstdio>

int tc, nCase;
int N, scarecrow, flag;
char field[105];

int main()
{
    scanf("%d ", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%d", &N);
        scanf("%s", field);

        scarecrow = 0;
        for(int i=0 ; i<N ; )
            if( field[i]=='.' ) i+=3, scarecrow++;
            else i++;

        printf("Case %d: %d\n", nCase, scarecrow);
        ++nCase;
    }
    return 0;
}
