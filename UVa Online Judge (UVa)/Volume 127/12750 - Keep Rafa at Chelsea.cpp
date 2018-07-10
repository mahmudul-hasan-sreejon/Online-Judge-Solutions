#include <cstdio>

char input[3];

int main()
{
    int tc, nCase = 1;
    scanf("%d", &tc);
    while( tc-- )
    {
        int n;
        scanf("%d", &n);

        bool flag = false;
        int match = 0, counter = 0;
        for(int i=1 ; i<=n ; i++)
        {
            scanf("%s", input);

            if( input[0]=='W' ) match = 0;
            else match++;

            if( !flag ) counter++;
            if( match>=3 ) flag = true;
        }

        if( n==counter && !flag ) printf("Case %d: Yay! Mighty Rafa persists!\n", nCase);
        else printf("Case %d: %d\n", nCase, counter);
        nCase++;
    }
    return 0;
}