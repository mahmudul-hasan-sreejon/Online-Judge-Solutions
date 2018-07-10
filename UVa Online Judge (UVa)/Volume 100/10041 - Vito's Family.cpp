#include <cstdio>
#include <algorithm>

using namespace std;

int s[505];

int main()
{
    int tc;
    scanf("%d", &tc);

    while( tc-- )
    {
        int r;
        scanf("%d", &r);

        for(int i=0 ; i<r ; i++) scanf("%d", &s[i]);

        sort(s, s+r);

        int d = 0;
        for(int i=0 ; i<r ; i++)
        {
            if( s[i]-s[r/2]<0 ) d += (s[i]-s[r/2])*(-1);
            else if( s[i]-s[r/2]>=0 ) d += s[i]-s[r/2];
        }

        printf("%d\n", d);
    }
    return 0;
}
